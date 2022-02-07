using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class IntRange
{
    [SerializeField] private int min, max;

    public IntRange(int min, int max){
        this.min = min;
        this.max = max;
    }
    public int GetValue() {
        if(min != max){
            return UnityEngine.Random.Range(min, max+1); //add 1 to max to make up for it being exclusive max
        } else { //case where they just want to input a singular value
            return min;
        }
    }
}
