using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[RequireComponent(typeof(TMP_Text))]
public class NumberTarget : Target
{
    TMP_Text numberDisplay;
    public override void Init(Vector3 speed, float lifeTimeMetres, int value, Action<Target, TriggerPart> hitCallback) {
        this.speed = speed;
        this.hitCallback = hitCallback;
        this.programmedCellDeathMetres = lifeTimeMetres;
        numberDisplay = this.GetComponent<TMP_Text>();
        numberDisplay.text = value.ToString();
    }
}
