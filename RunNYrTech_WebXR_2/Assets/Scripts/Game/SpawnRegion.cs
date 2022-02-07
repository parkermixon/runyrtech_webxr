using System;
using System.Collections.Generic;
using UnityEngine;

public class SpawnRegion : MonoBehaviour
{
    [Tooltip("How far the targets should stay in metres")]
    [SerializeField] public float targetLifeDistance = 40.0f;
}
