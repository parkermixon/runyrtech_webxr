using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public struct TargetGameData
{
    public Target[] targets;
    public IntRange value;

    [SerializeField] private StrikingPart allowedPart;

    public Game.GameAction action;

    [Tooltip("points are relative to head position at 0,0")]  
    public PointContainer[] spawnAreas;

    public StrikingPart[] AllowedParts {
        get {
            return CustomUtils.EnumFlagsToList<StrikingPart>(allowedPart).ToArray();
        }
    }
    
}