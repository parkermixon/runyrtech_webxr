using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SpawnManager : MonoBehaviour
{

    public static SpawnManager instance;

    [SerializeField]
    private TextMeshPro pointsTxt;

    [SerializeField]
    private int points = 0;

    [SerializeField]
    private int mathSum = 0;

    [SerializeField]
    private int mathNum = 10;

    [SerializeField]
    private GameObject[] prefabArray;

    [SerializeField]
    private List<GameObject[]> sphereStorageList = new List<GameObject[]>();

    [SerializeField]
    private int maxBoxSpawn;

    [SerializeField]
    private float spawnTimer;
    private float timer;

    [SerializeField]
    private float m_globalSpeed = 1f;
    public float globalSpeed { get { return m_globalSpeed; } }

    [SerializeField]
    private GameObject[] spawnPositions;

    [SerializeField]
    private GameObject spawnCenterObj;

    [SerializeField]
    private bool gameStart = false;

    [SerializeField]
    private PlayerController playerCon;

    private StartController.Modes currentMode;

    [SerializeField]
    private GameObject resetBox;

    [SerializeField]
    private GameObject modesButton;

    [SerializeField]
    private GameObject speedAdjButton;

    private GameObject m_pastSpawnPoint;

    [SerializeField]
    private LayerMask spawnLayer;

    [SerializeField]
    private GameObject boxSpawner;

    [SerializeField]
    private TextMeshPro mathNumTxt;

    [SerializeField]
    private TextMeshPro mathSumTxt;

    private GameObject pastSpawnPoint;

    [SerializeField]
    private int mathBlocksSpawnNumber = 2;

    private WaitForEndOfFrame nextFrame = new WaitForEndOfFrame();

    private void Awake()
    {
        instance = this;
        
        for(int i = 0; i < prefabArray.Length; i++)
        {

            CreatePrefabArray(i);
        }

        List<GameObject> tempList = new List<GameObject>();

        for(int i = 0; i < spawnCenterObj.transform.childCount; i++)
        {
            tempList.Add(spawnCenterObj.transform.GetChild(i).gameObject);
        }

        spawnPositions = tempList.ToArray();
    }

    private void OnEnable()
    {
        StartController.modeChange += ModeInt;
        SpeedAdjusterController.SetSpeed += SetSpeedAndStart;
        HitDetector.OnHit += UpdatePoints;

        resetBox.SetActive(false);
        speedAdjButton.SetActive(false);

        if (mathSumTxt != null && mathNumTxt != null)
        {
            mathSumTxt.gameObject.SetActive(false);
            mathNumTxt.gameObject.SetActive(false);
        }

    }

    private void OnDisable()
    {
        StartController.modeChange -= ModeInt;
        SpeedAdjusterController.SetSpeed += SetSpeedAndStart;
        HitDetector.OnHit -= UpdatePoints;
    }

    private void UpdatePoints(int point, Vector3 hitPoint)
    {

        if(currentMode == StartController.Modes.Math)
        {
            mathSum += point;
            
            if (mathSum > mathNum)
            {
                mathSum = 0;

            }
           else if (mathSum == mathNum)
            {
                mathSum = 0;
                points += 1;
            }

            pointsTxt.text = "Points: " + points;
            mathSumTxt.text = "Sum: " + mathSum;
                
        }
        else
        {
            points += point;

            pointsTxt.text = "Points: " + points;
        }


        
    }

    //Called once a mode box is hit:
    private void ModeInt(StartController.Modes mode)
    {
        if (mode == StartController.Modes.Reset)
        {
            ResetGame();
            return;
        }         

        if (gameStart)
            return;

        points = 0;

        mathSum = 0;
        
        pointsTxt.text = "Points: " + points;

        if(mathSumTxt != null)
        mathSumTxt.text = "Sum: " + mathSum;

        modesButton.SetActive(false);

        currentMode = mode;

        Vector3 tempPos = new Vector3(spawnCenterObj.transform.position.x, playerCon.CalcHeight(), spawnCenterObj.transform.position.z);

        spawnCenterObj.transform.position = tempPos;

        timer = 100;

        speedAdjButton.SetActive(true);

        pastSpawnPoint = spawnPositions[Random.Range(0, spawnPositions.Length)];

    }

    //Called once a speed box is hit:
    private void SetSpeedAndStart(float newSpeed, float newRate)
    {
        speedAdjButton.SetActive(false);

        if (currentMode == StartController.Modes.Math)
        {
            m_globalSpeed = newSpeed/ 1.2f;

            spawnTimer = newRate * 1.2f;
        }
        else
        {
            m_globalSpeed = newSpeed;

            spawnTimer = newRate;
        }

        gameStart = true;

        resetBox.SetActive(true);

        switch (currentMode)
        {
            case (StartController.Modes.Normal):
                StartCoroutine(NormalMode());
                return;
            case (StartController.Modes.Color):
                StartCoroutine(ColorMode());
                return;
            case (StartController.Modes.Math):
                StartCoroutine(MathMode());
                return;
            case (StartController.Modes.Hero):
                StartCoroutine(HeroMode());
                return;
            default:
                StartCoroutine(NormalMode());
                break;

        }

    }

    public IEnumerator HeroMode()
    {
        int num = 0;
        while (gameStart)
        {
            timer += Time.fixedDeltaTime;

            if (timer >= spawnTimer)
            {
                timer = 0f;

                num++;

                if (num % 3 == 0)
                    SpawnPrefab(1);
                if (num % 3 == 1)
                    SpawnPrefab(2);
                if (num % 8 == 7)
                    SpawnPrefab(4);
              

            }

            yield return nextFrame;
        }
    }

    public IEnumerator ColorMode()
    {
        int num = 0;
        while (gameStart)
        {
            timer += Time.fixedDeltaTime;

            if (timer >= spawnTimer)
            {
                timer = 0f;

                num++;
                          
                if (num % 2 == 1)
                    SpawnPrefab(1);
                if (num % 2 == 0)
                    SpawnPrefab(2);
                
            }

            yield return nextFrame;
        }
    }

    public IEnumerator NormalMode()
    {
        while(gameStart)
        {
            timer += Time.fixedDeltaTime;

            if (timer >= spawnTimer)
            {
                timer = 0f;

                SpawnPrefab(0);

            }

            yield return nextFrame;
        }
    }

    public IEnumerator MathMode()
    {
        mathNumTxt.gameObject.SetActive(true);
        mathSumTxt.gameObject.SetActive(true);

        mathNumTxt.text = "Num To Reach: " + mathNum;

        while (gameStart)
        {
            timer += Time.fixedDeltaTime;

            if (timer >= spawnTimer)
            {
                timer = 0f;

                SpawnMathBlock();

            }

            yield return nextFrame;
        }
    }

    //Reset the game once a hitbox is hit:
    private void ResetGame()
    {
        gameStart = false;
        StopAllCoroutines();
        modesButton.SetActive(true);
        resetBox.SetActive(false);
        speedAdjButton.SetActive(false);

        if (mathSumTxt != null && mathNumTxt != null)
        {
            mathNumTxt.gameObject.SetActive(false);
            mathSumTxt.gameObject.SetActive(false);
        }


        for(int i = 0; i < sphereStorageList.Count; i++)
        {
            foreach(GameObject sphere in sphereStorageList[i])
            {
                sphere.SetActive(false);
            }
        }

        DataManager.instance.CollectData("Player", points, Random.Range(0, 10), currentMode);

        pointsTxt.text = "Points: " + 0;
    }


    private void SpawnMathBlock()
    {
        boxSpawner.transform.position = pastSpawnPoint.transform.position;

        var tempSpawnPointList = Physics.OverlapBox(boxSpawner.transform.position, transform.localScale / 2, boxSpawner.transform.rotation, spawnLayer);

        int num1 = Random.Range(0, tempSpawnPointList.Length);

        int num2 = (num1 + 1 >= tempSpawnPointList.Length) ? num1 - 1 : num1 + 1;

        for (int i = 0; i < mathBlocksSpawnNumber; i++)
        {
             BoxController tempBoxCon = GetPrefab(sphereStorageList[3]).GetComponent<BoxController>();
             
                if(tempBoxCon != null)
                {
                    
                    tempBoxCon.pointValue = Random.Range(1, 8);

                    GameObject tempSpawnPoint;

                    if (i <= 0)
                       tempSpawnPoint  = tempSpawnPointList[num1].gameObject;
                    else
                        tempSpawnPoint = tempSpawnPointList[num2].gameObject;

                    tempBoxCon.gameObject.transform.position = tempSpawnPoint.transform.position;

                    pastSpawnPoint = tempSpawnPoint;

                    tempBoxCon.gameObject.SetActive(true);


                }
            
        }


    }

    private void SpawnPrefab(int prefabID)
    {
        GameObject tempSphere = GetPrefab(sphereStorageList[prefabID]);

        if (tempSphere != null)
        {
            boxSpawner.transform.position = pastSpawnPoint.transform.position;

            var tempSpawnPointList = Physics.OverlapBox(boxSpawner.transform.position, transform.localScale/2, boxSpawner.transform.rotation, spawnLayer);

            int num = Random.Range(0, tempSpawnPointList.Length);

            GameObject tempSpawnPoint = tempSpawnPointList[num].gameObject;

            tempSphere.transform.position = tempSpawnPoint.transform.position;

            pastSpawnPoint = tempSpawnPoint;

            tempSphere.SetActive(true);
            
        }
           
            
    }

    //Spawn boxes at the beginning:
    private void CreatePrefabArray(int prefabID)
    {
        List<GameObject> tempBoxList = new List<GameObject>();

        for (int i = 0; i < maxBoxSpawn; i++)
        {
            GameObject tempBox = Instantiate(prefabArray[prefabID], new Vector3(0f, -5f, 0f), Quaternion.identity);

            tempBox.SetActive(false);

            tempBoxList.Add(tempBox);
        }

        sphereStorageList.Add(tempBoxList.ToArray());

        tempBoxList.Clear();
    }

    //Get a inactive box from the array:
    private GameObject GetPrefab(GameObject[] array)
    {
        for (int i = 0; i < array.Length; i++)
        {
            GameObject tempBox = array[i];

            if (!tempBox.activeInHierarchy)
            {
                return tempBox;
            }
                 
        }

        Debug.LogError("Need to Spawn More Boxes");
        return null;
    }
}
