using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/*
 left-over from when i thought each gamemode would have significant mechanic differences
*/
[Serializable]
public abstract class GameMode
{
    /* public GameModeData data;
    protected LevelMultipliers levelMultipliers;
    protected Spawner spawnController;
    protected System.Func<Vector3> pointGenerator;

    public GameMode(GameModeData gameModeData, Spawner spawnController, Difficulty difficulty) {
        this.data = gameModeData;
        this.levelMultipliers = gameModeData.DifficultyMultipliers[difficulty];
        this.spawnController = spawnController;
        this.pointGenerator = spawnController.PointGenerators[gameModeData.spawnMode];
    }
    public abstract IEnumerator Run(Action incrementLevel); */
}
