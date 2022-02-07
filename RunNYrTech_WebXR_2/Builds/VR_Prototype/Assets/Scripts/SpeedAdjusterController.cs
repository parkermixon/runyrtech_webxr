using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedAdjusterController : MonoBehaviour
{
    public delegate void SpeedAdj(float tempSpeed, float tempRate);
    public static event SpeedAdj SetSpeed;

    [SerializeField]
    private float speed;

    [SerializeField]
    private float spawnRate;

    public void OnTriggerEnter(Collider other)
    {
        SetSpeed?.Invoke(speed, spawnRate);

    }


}
