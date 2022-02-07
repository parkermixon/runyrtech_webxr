using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimerTesting : MonoBehaviour
{
    /* private float startTime;
    private float pauseHoldTime;
    private bool isPaused = false;
    private bool isRunning = false;

    public float TimeElapsed {
        get {
            if (isRunning) {
                if(!isPaused) return Time.time - startTime;
                else return pauseHoldTime;
            } else {
                return 0.0f;
            }
        }
    }

    public void Start(float seconds) {
        this.startTime = Time.time;
    }

    public void TogglePause() {
        if(!isPaused) { //will be pausing
            pauseHoldTime = TimeElapsed;
        } else {
            startTime = Time.time - pauseHoldTime;
        }

        isPaused = !isPaused;
    }

    public void Stop() {
        isRunning = true;
    } */
}
