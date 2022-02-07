using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameController : MonoBehaviour
{
    public static GameController instance;

    private Mode[] potentialModes;

    [SerializeField]
    private Mode m_currentMode;

    public TextMeshPro levelText;

    public TextMeshPro totalPointsText;

    [SerializeField]
    private GameObject[] skillLevelButtons;

    [SerializeField]
    private GameObject resetButton;

    [SerializeField]
    private bool m_gameStarted = false;
    public bool gameStarted { set { m_gameStarted = value; } }

    [SerializeField]
    private PlayerController m_player;
    public PlayerController player { get { return m_player; } }

    [SerializeField]
    private TrafficLight trafficLightCon;


    private TutorialManager m_tutorialManager;
    public TutorialManager tutorialManager { get { return m_tutorialManager; } }

    public void Awake()
    {
        instance = this;

        List<Mode> tempModeList = new List<Mode>();

        tempModeList.AddRange(GetComponentsInChildren<Mode>());

        if (tempModeList.Count > 0)
            potentialModes = tempModeList.ToArray();

        m_tutorialManager = GetComponent<TutorialManager>();

    }

    public void Start()
    {
        SwitchMode(potentialModes[0]);
    }

    public void Update()
    {
        if (m_gameStarted && m_currentMode != null)
            m_currentMode.UpdateMode();
    }

    public void SwitchMode(Mode nextMode)
    {
        gameStarted = false;

        if (m_currentMode != null)
            m_currentMode.EndMode();

        m_currentMode = nextMode;

    }

    public void ResetGame()
    {
        resetButton.gameObject.SetActive(false);

        gameStarted = false;

        if (m_currentMode != null)
            m_currentMode.EndMode();

        for(int i = 0; i < skillLevelButtons.Length; i++)
        {
            skillLevelButtons[i].SetActive(true);
        }

        trafficLightCon.Reset();

    }

    public void CreateData(string playerName, float totalPoints, float levelReached)
    {

    }

    public void DisableSkillButons()
    {
        resetButton.gameObject.SetActive(true);

        for (int i = 0; i < skillLevelButtons.Length; i++)
        {
            skillLevelButtons[i].SetActive(false);
        }
    }


}
