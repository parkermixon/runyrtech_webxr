using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Difficulty
{
    EASY,
    MEDIUM,
    HARD,
    EXPERT
}

[Serializable]
public struct LevelMultipliers {
    public float speed, spawnRadius, spawnRate;

    public LevelMultipliers(float speed, float spawnRadius, float spawnRate){
        this.speed = speed;
        this.spawnRadius = spawnRadius;
        this.spawnRate = spawnRate;
    }
}