using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "PointsList", menuName = "ScriptableObjects/PointsList")]
public class PointsList : PointContainer
{
    public Vector2[] points;

    public override Vector2 GetPoint()
    {
        return CustomUtils.ChooseRandom<Vector2>(points);
    }
}
