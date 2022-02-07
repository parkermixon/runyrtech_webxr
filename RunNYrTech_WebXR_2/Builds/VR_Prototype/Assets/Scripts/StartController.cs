using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartController : MonoBehaviour
{

    public enum Modes { Normal, Color, Math, Hero, Reset};
    public Modes setMode;

    public delegate void StartMode(Modes mode);
    public static event StartMode modeChange;


    public void OnTriggerEnter(Collider other)
    {
        modeChange?.Invoke(setMode);
                
    }

}
