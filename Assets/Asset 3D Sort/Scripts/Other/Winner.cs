using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using static Cinemachine.DocumentationSortingAttribute;

public class Winner : MonoBehaviour
{
    [SerializeField] public GameObject Next_Level;
    [SerializeField] private Text textLevel;

    [SerializeField] public Text Text_CountClick;
    [SerializeField] public GameObject TimeBar;
    [SerializeField] public GameObject Restart;
    [SerializeField] public GameObject Skip;
    [SerializeField] public GameObject Shop;
    [SerializeField] public ParticleSystem fire1;
    [SerializeField] public ParticleSystem fire2;

    //

    public void NextLevel()
    {
        UI_Manager.instance.gameObject.SetActive(false); ;
        StartGame.instance.level++;
        PlayerPrefs.SetInt("BonusAnimals", StartGame.instance.BonusAnimals);
        PlayerPrefs.SetInt("IndexLevel", StartGame.instance.level);
        UI_Manager.instance.timeplay.timeValue = StartGame.instance.levelData.list_data[StartGame.instance.level].Time;
        fire1.gameObject.SetActive(false);
        fire2.gameObject.SetActive(false);
        UI_Manager.instance.Bonus.SetActive(false);
        SceneManager.LoadScene(StartGame.instance.level);
        fire1.gameObject.SetActive(true);
        fire2.gameObject.SetActive(true);
        UI_Manager.instance.timeplay.isStart = true;
        Click.isClick = true;
        Click.isStartGame = true;
        Next_Level.SetActive(false);
        textLevel.text = "Level :" + StartGame.instance.level;
        UI_Manager.instance.TapToPlay.SetActive(false);
        UI_Manager.instance._countPlay = StartGame.instance.levelData.list_data[StartGame.instance.level].Count;
        UI_Manager.instance.Text_CountClick.text = UI_Manager.instance._countPlay.ToString();
        UI_Manager.instance.Bonus.SetActive(false);
        UI_Manager.instance.NextLevel.SetActive(false);
        UI_Manager.instance.gameObject.SetActive(true); ;
    }

    public void ActiveButton()
    {
        textLevel.enabled = true;
        Text_CountClick.enabled = true;
        TimeBar.SetActive(true);
        Restart.SetActive(true);
        Skip.SetActive(true);
    }
}