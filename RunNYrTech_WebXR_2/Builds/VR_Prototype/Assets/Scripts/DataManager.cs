using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameAnalyticsSDK;

public class DataManager : MonoBehaviour
{

    public static DataManager instance;
    private int num;

    public void Awake()
    {
        if (instance != null)
        {
            Destroy(instance);
        }
        else
            instance = this;

    }

    public void Start()
    {
        GameAnalytics.Initialize();

    }

    public void CollectData(string playerName = "Player", int totalPoints = 0, int missedPoints = 0, StartController.Modes mode = StartController.Modes.Normal)
    {
        
        num++;
        string path = Application.persistentDataPath + "/" + playerName + num + ".json";
        Data newPoint = new Data();
        newPoint.playerName = playerName + num;
        newPoint.totalPoints = totalPoints;
        newPoint.totalMissed = missedPoints;    
        string contents = JsonUtility.ToJson(newPoint, true);
        System.IO.File.WriteAllText(path, contents);
        GameAnalytics.NewDesignEvent(playerName + num + "-" + mode + "- TotalPoints", totalPoints);
        GameAnalytics.NewDesignEvent(playerName + num + "-" + mode + "- MissedPoints", missedPoints);
    }

}
