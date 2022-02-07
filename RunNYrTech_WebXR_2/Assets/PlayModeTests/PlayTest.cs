using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

public class PlayTest : MonoBehaviour
{
    /* [UnityTest]
    public IEnumerator PlayTestWithEnumeratorPasses()
    {
        TimerTesting timer = new TimerTesting();
        timer.Start(100.0f);
        yield return new WaitForSeconds(1.0f);
        float timeRem = timer.TimeElapsed;
        LogAssert.Expect(LogType.Log, timeRem.ToString());
        Debug.Log(timeRem.ToString());

        timer.TogglePause();
        yield return new WaitForSeconds(1.0f);
        float timeRem2 = timer.TimeElapsed;
        LogAssert.Expect(LogType.Log, timeRem2.ToString());
        Debug.Log(timeRem2.ToString());

        timer.TogglePause();
        yield return new WaitForSeconds(1.0f);
        float timeRem3 = timer.TimeElapsed;
        LogAssert.Expect(LogType.Log, timeRem3.ToString());
        Debug.Log(timeRem3.ToString());
        
        timer.Stop();
    } */
}
