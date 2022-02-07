using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//TODO: add game/user id
        //add misses, as calculated by when target is deleted after ?old age? or when ?past player?
        //add way to save data in class in case export doesn't work
        //

public class GameRecorder : MonoBehaviour
{
    private bool isRecording = false;
    private GameData gameData;

    public void StartRecording(GameData gameData, Game game, Player player, float framerate) {
        this.gameData = gameData;
        game.TargetHit += (Target target, TriggerPart triggerPart) => {
            gameData.hits.Add(new HitData(Time.time, target.GetState(), triggerPart.GetState(), game.GetState()));
        };
        isRecording = true;
        StartCoroutine(RecordFrames(game, player, framerate));
    }

    //done as coroutine to allow custom framerate
    private IEnumerator RecordFrames(Game game, Player player, float framerate) {//clean up dependencies and the IStateRecordable interface and stuff, its messy
        gameData.gameEvents.Add(new GameEvent(Time.time, "start"));
        while(isRecording) {
            //Get All targets' target states
            StateFrame stateFrame = new StateFrame(Time.time, player.GetState());

            foreach(Target target in game.CurrentTargets) {
                stateFrame.targets.Add(target.GetState()); 
            }

            gameData.stateFrames.Add(stateFrame);
            yield return new WaitForSeconds(1/framerate); //wait at end, to make sure isRecording before recording more
        }
    }

    public void StopRecording() {
        gameData.gameEvents.Add(new GameEvent(Time.time, "end"));
        isRecording = false;
    }

    public string ExportRecording() {
        return JsonUtility.ToJson(gameData);
    }
}
