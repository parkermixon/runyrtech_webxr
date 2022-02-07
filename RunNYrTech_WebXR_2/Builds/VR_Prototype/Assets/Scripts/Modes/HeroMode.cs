using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroMode : Mode
{

    internal Level m_currentLevel;
    public Level currentLevel { get { return m_currentLevel; } }

    [SerializeField]
    internal int m_totalPoints;
    public int totalPoints { get { return m_totalPoints; } }

    [SerializeField]
    internal int m_levelReached;
    public int levelReached { get { return m_levelReached; } }

    [SerializeField]
    internal TrafficLight levelTransitionLight;

    [SerializeField]
    internal Level[] levelList;

    public void Awake()
    {
        m_spawnCon = GetComponentInParent<SpawnController>();

        aSource = GetComponent<AudioSource>();

    }

    public void OnEnable()
    {
        SkillButton.SetSkillLevel += StartMode;
        HitDetector.OnHit += UpdatePoints;
    }

    public override void StartMode(float newSpeed, float newDensity)
    {
        m_modeActive = true;
        m_pauseMode = false;

        m_currentLevel = levelList[0];
        m_levelReached = 1;

        GameController.instance.levelText.text = "Level: " + m_levelReached;
        GameController.instance.totalPointsText.text = "Points: " + m_totalPoints;

        timer = 0f;
        num = 0;

        currentSpawnSpeed = newSpeed;
        currentSpawnDensity = newDensity;

        //Set the Game to the Player Height:
        Vector3 tempPos = new Vector3(m_spawnCon.spawnCenter.transform.position.x, GameController.instance.player.CalcHeight(), m_spawnCon.spawnCenter.transform.position.z);
        m_spawnCon.spawnCenter.transform.position = tempPos;

        //Start the Game:
        GameController.instance.gameStarted = true;

        //Stop any tutorial audio and play the music:
        GameController.instance.tutorialManager.StopAdudio();

        //Play Level Start Sound:
        aSource.PlayOneShot(m_currentLevel.levelAudio);
    }

    public override void UpdateMode()
    {
        if (!m_modeActive)
            return;


        if (!m_pauseMode)
        {
            timer += Time.fixedDeltaTime;

            if (timer >= currentSpawnDensity)
            {
                timer = 0f;

                num++;

                if (num % 7 == 0)
                    m_spawnCon.SpawnPrefab(1, currentLevel.pointMulti, currentSpawnSpeed);
                else
                    m_spawnCon.SpawnPrefab(0, currentLevel.pointMulti, currentSpawnSpeed);

                if (num % 9 == 0)
                {
                    int ran = Random.Range(1, 10);

                    if (ran >= 5)
                        m_spawnCon.SpawnPrefab(2, currentLevel.pointMulti, currentSpawnSpeed);
                    else
                        m_spawnCon.SpawnPrefab(3, currentLevel.pointMulti, currentSpawnSpeed);
                }



            }
        }

    }

    public override void UpdatePoints(int newPoints, Vector3 hitPoint)
    {
        m_totalPoints += newPoints;

        if (m_totalPoints >= currentLevel.pointsToNextLevel)
        {
            m_pauseMode = true;

            timer = 0f;
            m_spawnCon.ResetSpheres();
            m_levelReached++;
            m_currentLevel = levelList[m_levelReached - 1];
            currentSpawnDensity += m_currentLevel.densityIncriment;
            currentSpawnSpeed += m_currentLevel.speedIncriment;
            levelTransitionLight.gameObject.SetActive(true);
            levelTransitionLight.StartCoroutine(levelTransitionLight.StartTrafficLight(this, m_currentLevel.levelAudio, m_currentLevel.levelModel));
        }

        GameController.instance.levelText.text = "Level: " + m_levelReached;
        GameController.instance.totalPointsText.text = "Points: " + m_totalPoints;
    }

    public override void EndMode()
    {
        m_modeActive = false;
        m_pauseMode = false;

        m_spawnCon.ResetSpheres();

        GameController.instance.CreateData("Player " + Random.Range(0, 1000), m_totalPoints, m_levelReached);
        m_totalPoints = 0;
        m_levelReached = 1;
        timer = 0f;
        num = 0;
        GameController.instance.levelText.text = "Level: " + 1;
        GameController.instance.totalPointsText.text = "Points: " + 0;

        levelTransitionLight.gameObject.SetActive(false);

        m_currentLevel = levelList[0];
    }

}
