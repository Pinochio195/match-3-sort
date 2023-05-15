using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoserGame : MonoBehaviour
{
    [SerializeField] public GameObject Loser;
    [SerializeField] public GameObject Text_Loser;

    public void LoserGame_()
    {
        //StartCoroutine(nameof(DelayRestartWhenLoser));
        SceneManager.LoadScene(StartGame.instance.level);
        UI_Manager.instance.timeplay.isStart = true;
        UI_Manager.instance.timeplay.timeValue = StartGame.instance.levelData.list_data[StartGame.instance.level].Time;
        Click.isStartGame = true;
        Loser.SetActive(false);
        Text_Loser.SetActive(false);
        Click.isClick = true;
        Click.isStartGame = true;
    }
}