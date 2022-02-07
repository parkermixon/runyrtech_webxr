using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using System.Runtime.InteropServices;
using AOT;

/*
pretty much just a wrapper class to run the coroutine for the game
*/
public class GameInterface : Singleton<GameInterface> 
{
    [DllImport("__Internal")] private static extern void UpdateGameStats();
    [DllImport("__Internal")] private static extern void Init(Action<string, string, float> StartFunc, Action EndFunc, Func<string> GetGamemodesFunc);
    [DllImport("__Internal")] private static extern void StartGameLib();
    [DllImport("__Internal")] private static extern void DownloadData(string content, string dataType, string prefFileName, string downloadLinkName);

    private Game currentGame = null;
    private Coroutine currentRunningGame = null;

    [SerializeField] private SpawnRegion spawnRegion;
    [SerializeField] protected List<GameModeData> gameModes;
    [SerializeField] private Player player;
    [SerializeField] private float recordingFramerate = 1.0f;

    [MonoPInvokeCallback(typeof(Action))]
    public static void Callback()
    {
        Debug.Log("Callback called");
    }

    new void Awake(){ //TODO, adjust for player height
        base.Awake(); //sets up singleton

        #if !UNITY_EDITOR 
            #if UNITY_WEBGL
                Debug.Log("unity webgl in production");
                Init(StartGameJS, EndGameJS, GetGameModeNamesJS);
                //StartGameLib(); //starts game from jslib
            #endif
        #endif

        #if UNITY_EDITOR
            //StartGame(gameModes[4], Difficulty.EASY, 10);
        #endif
    }

    void Start() {
        #if !UNITY_EDITOR 
            #if UNITY_WEBGL
                UpdateGameStats();
            #endif
        #endif
    }

    //TODO: add user id or whatever to json export
    public bool StartGame(GameModeData gameMode, Difficulty difficulty, float gameLengthSeconds) { //bool: if game started successfully
        if(gameMode!=null){
            if(currentGame != null) {
                currentGame.End();
            }
            GameRecorder gameRecorder = new GameObject("_GAME_RECORDER").AddComponent<GameRecorder>();
            currentGame = new Game(gameMode, spawnRegion, difficulty);
            gameRecorder.StartRecording(new GameData(gameMode.name, difficulty, 1.0f), currentGame, player, recordingFramerate);
            currentGame.GameEnded += () => { //don't have to call stop recording on gamerecorder, it does it by itself
                currentGame = null;
                gameRecorder.StopRecording();
                Debug.Log("game over in interface");
                //Debug.Log(gameRecorder.ExportRecording());
                DownloadData(gameRecorder.ExportRecording(), "text/json", "data.json", "Download Recording Data"); //this is backup in case uploading doesn't work
            };
            
            StartCoroutine(currentGame.Run(gameLengthSeconds));
            return true;
        } else {
            return false;
        }
    }

    public void TogglePauseGame(){
        //TODO
    }

    //Public Methods for Javascript to Access //might move to another class idk

    [MonoPInvokeCallback(typeof(Action<string, string, float>))]
    public static void StartGameJS(string gameModeName, string difficultyName, float gameLengthSeconds){ //take in javascript array that has been 
        Debug.Log("Startgamejs is called");
        Debug.Log(gameModeName);
        Debug.Log(difficultyName);
        Debug.Log(gameLengthSeconds);
        bool isValidEnum = Enum.TryParse<Difficulty>(difficultyName, out Difficulty difficulty);

        Debug.Log("Parsed game length: " + gameLengthSeconds);
        if(isValidEnum) {
            GameModeData gameMode = TryParseGameModeName(gameModeName);
            Debug.Log(gameMode.name);
            if(gameMode!= null ) {
                bool gameStarted = Instance.StartGame(gameMode, difficulty, gameLengthSeconds);
                if (!gameStarted) Debug.LogError("Unable to start selected game");
            } else {
                Debug.LogError("Invalid gamemode name");
            }
        } else {
            Debug.LogError("Invalid difficulty");
        }
    }

    [MonoPInvokeCallback(typeof(Action))]
    public static void EndGameJS(){
        Instance.currentGame.End();
    }

    [MonoPInvokeCallback(typeof(Action<string>))]
    public static string GetGameModeNamesJS(){
        List<string> gameModeNames = new List<string>();

        foreach(GameModeData gameMode in Instance.gameModes) {
            gameModeNames.Add("\"" + gameMode.gameModeName + "\"");
        }

        return "[" + string.Join(",", gameModeNames) + "]";
    }

    public static GameModeData TryParseGameModeName(string gameModeName){
        foreach(GameModeData gameMode in Instance.gameModes) {
            if(gameModeName.ToLower() == gameMode.gameModeName.ToLower()){
                Debug.Log(gameModeName);
                return gameMode;
            }
        }

        return null; 
    }

}
