using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


//wrapper to run the GameMode from GameModeData
public class Game : IStateRecordable<GameState>
{
    public enum GameEvent {
        Start,
        Pause,
        Resume,
        End
    }

    public enum GameAction { //could just get rid of decrement ones and increment by negative values
        EndGame,
        IncrementPoints,
        DecrementPoints,
        IncrementSum,
        DecrementSum
    }

    public event Action GameEnded;
    public event Action<int> PointsChanged;
    public event Action<int> SumChanged;
    public event Action<Target, TriggerPart> TargetHit;
    private int points = 0;

    public int Points {
        get {
            return points;
        }
        private set {
            points = value;
            Debug.Log("points changed to " + value);
            if(PointsChanged!=null) {
                PointsChanged.Invoke(points);
            }
        }
    }

    private int sum = 0;

    public int Sum {
        get {
            return sum;
        }
        private set {
            sum = value;
            if(SumChanged != null){
                SumChanged.Invoke(sum);
            }
        }
    }

    public Target[] CurrentTargets {
        get {
            return spawnRegion.GetComponentsInChildren<Target>();
        }
    }

    private GameModeData data;
    private Difficulty difficulty;
    private LevelMultipliers levelMultipliers;
    private SpawnRegion spawnRegion;
    GameUI displayUI;
    Timer timer;

    private Dictionary<GameAction, Action<int>> gameActionCallbacks;

    private bool isGameRunning = false;

    public Game(GameModeData gameModeData, SpawnRegion spawnRegion, Difficulty difficulty) {
        this.data = gameModeData;
        this.difficulty = difficulty;
        this.levelMultipliers = gameModeData.DifficultyMultipliers[difficulty];
        this.spawnRegion = spawnRegion;

        this.displayUI = GameObject.Instantiate(gameModeData.displayUI);
        this.displayUI.transform.position = spawnRegion.transform.forward * -10 + new Vector3(0, 5, 0); //set it 10 away in same line as spawner and 5 up
        this.displayUI.transform.rotation = spawnRegion.transform.rotation * Quaternion.AngleAxis(180, Vector3.up); //rotate 180 because text is backwards; could just change it in prefab, but who would do that?

        PointsChanged += (int value) => {this.displayUI.Points = value;};
        SumChanged += (int value) => {this.displayUI.Sum = value;};

        gameActionCallbacks = new Dictionary<GameAction, Action<int>>() {
            {GameAction.EndGame, (int value)=>{this.End();}},
            {GameAction.IncrementPoints, IncrementPoints},
            {GameAction.DecrementPoints, DecrementPoints},
            {GameAction.IncrementSum, IncrementSum},
            {GameAction.DecrementSum, DecrementSum}
        };

        Points = 0;
    }

    public IEnumerator Run(float gameLengthSec){
        isGameRunning = true;
        timer = new GameObject("_TIMER_").AddComponent<Timer>(); //is it better to create this at runtime or beforehand in editor and pass reference
        timer.TimeChanged += (float value)=>{displayUI.Time = (int)System.Math.Ceiling(value);};
        timer.TimerFinished += this.End;
        timer.StartTimer(gameLengthSec);

        yield return new WaitForSeconds(1/UnityEngine.Random.Range(this.data.spawnRate.min, this.data.spawnRate.max)); //give a little buffer for the player before targets spawn

        while(isGameRunning) {
            //float speedMulitplier = (Level > 0) ? (Level * this.levelMultipliers.speed) : 1; //don't know if I want speed to increase as level increases
            float targetSpeed = this.data.initialSpeed; // * speedMulitplier;

            TargetGameData targetGameData = CustomUtils.ChooseRandom<TargetGameData>(this.data.targets);
            int targetValue = targetGameData.value.GetValue();

            Target spawnedTarget = Spawn(targetGameData, targetSpeed, targetValue, (Target target, TriggerPart triggerPart) => {
                gameActionCallbacks[targetGameData.action](targetValue);
                if(TargetHit != null) {
                    TargetHit.Invoke(target, triggerPart);
                }
            });
            yield return new WaitForSeconds(1/UnityEngine.Random.Range(this.data.spawnRate.min, this.data.spawnRate.max)); //placed at end to make sure game is still running before spawning target
        }
    }

    public void TogglePause() {
        //TODO
    }

    public void End() { //figure out better way to do this
        Debug.Log("ending game in game class");
        isGameRunning = false;
        this.displayUI.EndGame();
        GameObject.Destroy(timer.gameObject); //do this instead of stop timer since stop timer will trigger the events //all feels messy
        if(GameEnded != null) {
            GameEnded.Invoke();
        }
        GameObject.Destroy(this.displayUI.gameObject);
    }

    public Target Spawn(TargetGameData selectedTargetData, float speed, int value, Action<Target, TriggerPart> hitCallback){
        Target targetPrefab = CustomUtils.ChooseRandom<Target>(selectedTargetData.targets);

        PointContainer pointContainer = CustomUtils.ChooseRandom<PointContainer>(selectedTargetData.spawnAreas);
        Vector2 point = pointContainer.GetPoint();

        Vector3 localSpawnPos = new Vector3(point.x, point.y, 0);
        Vector3 globalSpawnPos = spawnRegion.transform.TransformPoint(localSpawnPos);

        Target target = GameObject.Instantiate(targetPrefab, spawnRegion.transform);
        target.transform.rotation.SetLookRotation(spawnRegion.transform.forward, spawnRegion.transform.up);
        target.transform.localPosition = localSpawnPos;

        target.Init(spawnRegion.transform.forward * speed, spawnRegion.targetLifeDistance, value, hitCallback); //Trying to decide between init function or setting things manually in this script
        target.GetTargetState = () => {
            return new TargetState(targetPrefab.name, selectedTargetData.AllowedParts, target.transform, value);
        };

        return target;
    }

    private void IncrementPoints(int value){
        Points+=value;
    }

    private void DecrementPoints(int value){
        Points-=value;
    }

    private void IncrementSum(int value){
        Debug.Log(Sum + value);
        if(Sum + value == 10) {//hardcoded here, move to variable when reorganizing/cleaning up code
            Debug.Log(" sum reached -> increasing points");
            Points++;
            Sum = 0;
        } else if (Sum + value > 10){
            Sum = 0;
        } else {
            Sum+=value;
        }
    }

    private void DecrementSum(int value){
        Sum-=value;
    }

    public GameState GetState() {
        return new GameState(this.Points, this.Sum);
    }
}
