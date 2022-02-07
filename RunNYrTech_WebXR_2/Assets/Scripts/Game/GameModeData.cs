using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* This class serves as a container for all the data corresponding to spawning behaviour

    Important: relies on the fact each gamemode will have fairly similar mechanics
 */

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/GameMode", order = 1)]
public class GameModeData : ScriptableObject
{
    [Tooltip("Name of the gamemode")]
    [SerializeField] public string gameModeName = ""; //if not assigned, will be assigned to the scriptableobject instance name
    [Tooltip("Base target speed in units per fixed update")]
    [SerializeField] public GameUI displayUI;
    [SerializeField] public float initialSpeed = 0.01f; //need to establish a common unit throughout for this (m/s, m/frame)
    [Tooltip("Min/Max spawn rate in spawns per second")]
    [SerializeField] public FloatRange spawnRate = new FloatRange(0.4f, 0.8f); //spawns per second
    [SerializeField] public LevelMultipliers EasyMultipliers = new LevelMultipliers(0.7f, 0.7f, 0.7f); //multipliers are not being used yet
    [SerializeField] public LevelMultipliers MediumMulipliers = new LevelMultipliers(1.0f, 1.0f, 1.0f);
    [SerializeField] public LevelMultipliers HardMultipliers = new LevelMultipliers(1.2f, 1.2f, 1.2f);
    [SerializeField] public LevelMultipliers ExpertMultipliers = new LevelMultipliers(1.5f, 1.5f, 1.5f);
    [SerializeField] public TargetGameData[] targets;

    private Dictionary<Difficulty, LevelMultipliers> difficultyMultipliers = new Dictionary<Difficulty, LevelMultipliers>();
    public Dictionary<Difficulty, LevelMultipliers> DifficultyMultipliers { //don't know if this safe (does it protect against accidentally changing the dictionary?)
        get {
            return difficultyMultipliers;
        }
    }

    void OnEnable(){
        if(gameModeName.Length == 0){ //i.e. not assigned a value yet
            gameModeName = this.name;
        }

        difficultyMultipliers[Difficulty.EASY] = EasyMultipliers;
        difficultyMultipliers[Difficulty.MEDIUM] = MediumMulipliers;
        difficultyMultipliers[Difficulty.HARD] = HardMultipliers;
        difficultyMultipliers[Difficulty.EXPERT] = ExpertMultipliers;
    }
}
