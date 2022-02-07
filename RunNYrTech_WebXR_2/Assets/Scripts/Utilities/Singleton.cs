using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class Singleton<T> : MonoBehaviour where T : MonoBehaviour
{
    public static T Instance {
        get;
        private set;
    }

    public void Awake() {
        Debug.Log("setting up singleton");
        //Setup Singleton
        if(Instance == null) {
            T currentInstance = this.gameObject.GetComponent<T>();

            if (currentInstance == null) {
                Instance = this.gameObject.AddComponent<T>(); //don't think this is reachable : if it awakes then its attached to a gameobject...
            } else {
                Instance = currentInstance;
            }
        } else if (Instance.gameObject.GetInstanceID() != this.gameObject.GetInstanceID()){
            Destroy(this.gameObject);
        }
    }

    //thinking of adding abstract NewInstance method to kinda serve as a constructor thingy
}
