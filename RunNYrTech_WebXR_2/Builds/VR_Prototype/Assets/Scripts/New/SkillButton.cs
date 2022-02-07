using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SkillButton : MonoBehaviour
{
    public delegate void SkillLevel(float newSpeed, float newDensity);
    public static event SkillLevel SetSkillLevel;

    [SerializeField]
    private float spawnSpeed;

    [SerializeField]
    private float spawnDensity;

    public void OnTriggerEnter(Collider other)
    {
        SetSkillLevel?.Invoke(spawnSpeed, spawnDensity);

        GameController.instance.DisableSkillButons();
    }


}
