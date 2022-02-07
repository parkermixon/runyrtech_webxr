using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Level 
{
    [SerializeField]
    private string levelName;

    [SerializeField]
    private int m_pointsToNextLevel;
    public int pointsToNextLevel { get { return m_pointsToNextLevel; } }

    [SerializeField]
    private float m_speedIncriment = 0.5f;
    public float speedIncriment { get { return m_speedIncriment; } }

    [SerializeField]
    private float m_densityIncriment = -0.025f;
    public float densityIncriment { get { return m_densityIncriment; } }

    [SerializeField]
    private int m_pointMutli = 1;
    public int pointMulti { get { return m_pointMutli; } }

    [SerializeField]
    private AudioClip m_levelAudio;
    public AudioClip levelAudio { get { return m_levelAudio; } }

    [SerializeField]
    private GameObject m_levelModel;
    public GameObject levelModel { get { return m_levelModel; } }
}
