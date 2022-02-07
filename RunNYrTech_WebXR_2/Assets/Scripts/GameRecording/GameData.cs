using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public struct GameData {
        public string mode;
        public string difficulty;
        public float stateFrameRate;
        public List<StateFrame> stateFrames;//stores stateframe in reference to time (float)
        public List<HitData> hits;
        public List<GameEvent> gameEvents;

        public GameData(string mode, Difficulty difficulty, float stateFrameRate) {
            this.mode = mode;
            this.difficulty = difficulty.ToString();
            this.stateFrameRate = stateFrameRate;
            stateFrames = new List<StateFrame>();
            hits = new List<HitData>();
            gameEvents = new List<GameEvent>();
        }
    }

    [Serializable]
    public struct StateFrame {

        public float time;
        public PlayerState player; 
        public List<TargetState> targets;

        public StateFrame(float time, PlayerState playerState) {
            this.time = time;
            this.targets = new List<TargetState>();
            this.player = playerState;
        }
    }

    [Serializable]
    public struct PlayerState { //could change this to just serializing the player class
        public Vector3 headPosition, leftHandPosition, rightHandPosition;
        public Quaternion headRotation, leftHandRotation, rightHandRotation;

        public PlayerState(Transform head, Transform leftHand, Transform rightHand) {
            this.headPosition = head.position;
            this.leftHandPosition = leftHand.position;
            this.rightHandPosition = rightHand.position;

            this.headRotation = head.rotation;
            this.leftHandRotation = leftHand.rotation;
            this.rightHandRotation = rightHand.rotation;
        }
    }

    [Serializable]
    public struct TargetState { //could change this to just serializing the target class
        public string name;
        public string[] allowedHitParts;
        public Vector3 position;
        public Quaternion rotation;
        public int value;

        public TargetState(string name, StrikingPart[] allowedStrikingParts, Transform transform, int value) {
            this.name = name;
            this.position = transform.position;
            this.rotation = transform.rotation;
            this.value = value;

            this.allowedHitParts = new string[allowedStrikingParts.Length];
            for (int i = 0; i<allowedStrikingParts.Length; i++) {
                allowedHitParts[i] = allowedStrikingParts[i].ToString();
            }
        }
    } 

    [Serializable]
    public struct HitData {
        public float time;
        public TargetState target;
        public CollidingPart collidingPart;
        public GameState newGameState;

        public HitData(float time, TargetState target, CollidingPart collidingPart, GameState newGameState) {
            this.time = time;
            this.target = target;
            this.collidingPart = collidingPart;
            this.newGameState = newGameState;
        }
    }

    [Serializable]
    public struct CollidingPart {
        public string name;
        public Vector3 position;
        public Quaternion rotation;

        public CollidingPart(string name, Transform transform) {
            this.name = name;
            this.position = transform.position;
            this.rotation = transform.rotation;
        }
    }

    [Serializable]
    public struct GameState { //could change this to just serializing the game class
        public int points;
        public int sum;

        public GameState(int points, int sum) {
            this.points = points;
            this.sum = sum;
        }
    }

    [Serializable]
    public struct GameEvent {
        public float time;
        public string gameEvent;

        public GameEvent(float time, string gameEvent) {
            this.time = time;
            this.gameEvent = gameEvent;
        }
    }
