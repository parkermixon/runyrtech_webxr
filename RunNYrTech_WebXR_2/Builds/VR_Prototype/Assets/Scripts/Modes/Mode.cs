using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Mode : MonoBehaviour
{

    internal float currentSpawnSpeed;

    internal float currentSpawnDensity;

    internal bool m_modeActive = false;

    internal bool m_pauseMode = false;
    public bool pauseMode { get { return m_pauseMode; }  set { m_pauseMode = value; } }

    internal SpawnController m_spawnCon;
    internal float timer = 0;
    internal int num = 0;
    internal AudioSource aSource;


    public virtual void StartMode(float newSpeed, float newDensity)
    {

    }

    public virtual void UpdateMode()
    {

     
    }

    public virtual void UpdatePoints(int newPoints, Vector3 hitPoint)
    {

    }

    public virtual void EndMode()
    {
    }


}
