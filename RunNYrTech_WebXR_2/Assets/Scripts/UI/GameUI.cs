using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameUI : MonoBehaviour
{

    [SerializeField] private TMP_Text TimerText;
    [SerializeField] private TMP_Text PointsText;
    [SerializeField] private TMP_Text SumText;

    public int Sum {
        set {
            SumText.text = "Sum: " + value.ToString();
        }
    }

    public int Points {
        set {
            Debug.Log("setting points to " + value);
            PointsText.text = "Points: " + value.ToString();
        }
    }

    public int Time {
        set {
            TimerText.text = value.ToString();
        }
    }

    public void EndGame(){
        Debug.Log("GAME OVER!!!! AHAHHHHH");
    }
}
