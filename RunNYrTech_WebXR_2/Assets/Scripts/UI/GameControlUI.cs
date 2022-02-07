using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameControlUI : MonoBehaviour
{
    [SerializeField]
    private GameModeData[] gameModes;

    [SerializeField]
    private float gameLengthSeconds;

    [SerializeField]
    private Dropdown gameModeDropdown;

    [SerializeField]
    private Button startGameButton;

    public void Awake() {
        foreach(GameModeData gameMode in gameModes) {
            gameModeDropdown.options.Add(new Dropdown.OptionData(gameMode.gameModeName));
        }

        startGameButton.onClick.AddListener(StartSelectedGame);
    }

    private void StartSelectedGame() {
        int selectedIndex = gameModeDropdown.value;

        string gameModeName = gameModeDropdown.options[selectedIndex].text;
        GameModeData gameMode = GameInterface.TryParseGameModeName(gameModeName);

        if (gameMode != null) {
            GameInterface.Instance.StartGame(gameMode, Difficulty.EASY, gameLengthSeconds);
        } else {
            Debug.LogError("Unable to find game mode");
        }
    }
}
