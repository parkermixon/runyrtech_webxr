using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer : MonoBehaviour
{

    private float timeRemaining = 0.0f;
    public float TimeRemaining {
        get {
            return timeRemaining;
        }
        private set {
            timeRemaining = value;
            if(TimeChanged!=null) {
                TimeChanged.Invoke(timeRemaining);
            }
        }
    }

    private bool isPaused = false;

    public event Action TimerFinished;
    public event Action<float> TimeChanged;

    void Update() {
        if(!isPaused) {
            TimeRemaining-=Time.deltaTime;

            if(TimeRemaining <= 0.0f) {
                StopTimer();
            }
        }
    }

    public void StartTimer(float seconds) {
        TimeRemaining = seconds;
    }

    public void TogglePause() {
        isPaused=!isPaused;
    }
    

    public void StopTimer() {
        TimerFinished.Invoke();
    }
}
