using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.UIElements;
using static Cinemachine.DocumentationSortingAttribute;
using Slider = UnityEngine.UI.Slider;
using Toggle = UnityEngine.UI.Toggle;

public class UI_Manager : MonoBehaviour
{
    public static UI_Manager instance { get; set; }
    public int _countPlay;
    [SerializeField] public Text Text_Level;
    [SerializeField] public Text Text_CountClick;

    [SerializeField] public GameObject TapToPlay;
    [SerializeField] public TimePlay timeplay;
    public Winner winner;
    public SaveData levelData;

    //
    [SerializeField] private GameObject text;

    [SerializeField] public Animator animator_Loser;
    [SerializeField] public Animator animator_Setting;
    [SerializeField] private GameObject TimeBar;
    [SerializeField] public GameObject NextLevel;
    [SerializeField] private GameObject Restart;
    [SerializeField] private GameObject Skip;
    [SerializeField] public GameObject Shop_;
    [SerializeField] public GameObject Shopping;
    [SerializeField] public GameObject ADS;
    [SerializeField] public GameObject Setting;
    [SerializeField] public Toggle CheckVibrate;
    [SerializeField] public Toggle CheckMusic;
    [SerializeField] public ParticleSystem FireWin1;
    [SerializeField] public ParticleSystem FireWin2;
    [SerializeField] private AudioSource audio;
    [SerializeField] public GameObject Bonus;
    [SerializeField] public GameObject AnimalsDark;
    [SerializeField] public GameObject AnimalsLight;
    [SerializeField] public List<Sprite> list_Bonus;

    //
    public bool isCheckVidrate;

    public bool isCheckMusic;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        Text_Level.enabled = false;
        Text_CountClick.enabled = false;
        TimeBar.SetActive(false);
        Restart.SetActive(false);
        Skip.SetActive(false);
        TapToPlay.transform.GetChild(0).GetComponent<Text>().text = "Start Game";
        Text_Level.text = "Level :" + (StartGame.instance.level).ToString();
        _countPlay = levelData.list_data[StartGame.instance.level].Count;
        Text_CountClick.text = _countPlay.ToString();
    }

    public void Shop()
    {
        SceneManager.LoadScene("Shop");
        Shop_.SetActive(false);
        ADS.SetActive(false);
        TapToPlay.SetActive(false);
        Shopping.SetActive(true);
    }

    public void SettingGame()
    {
        Setting.SetActive(true);
        Click.isClick = false;
    }

    public void ExitSetting()
    {
        Setting.SetActive(false);
        Click.isClick = true;
    }

    public void Check_Vibrate()
    {
        if (CheckVibrate.isOn)
        {
            Handheld.Vibrate();
            PlayerPrefs.SetInt("IsVibrate", 1);
        }
        else
        {
            PlayerPrefs.SetInt("IsVibrate", 0);
        }
    }

    public void Check_Music()
    {
        if (CheckMusic.isOn)
        {
            audio.volume = 1;
            PlayerPrefs.SetInt("IsMusic", 1);
        }
        else
        {
            audio.volume = 0;
            PlayerPrefs.SetInt("IsMusic", 0);
        }
    }

    public void Home()
    {
        SceneManager.LoadScene("Home");
        Text_Level.enabled = false;
        Text_CountClick.enabled = false;
        TimeBar.SetActive(false);
        Restart.SetActive(false);
        Skip.SetActive(false);
        TapToPlay.SetActive(true);
        //TapToPlay.transform.GetChild(0).GetComponent<Text>().text = "Start Game";
        Shop_.SetActive(true);
        Bonus.SetActive(false);
        Setting.SetActive(false);
        NextLevel.SetActive(false);
        Shopping.SetActive(false);
    }

    public void RestartGame()
    {
        gameObject.SetActive(false);
        SceneManager.LoadScene(StartGame.instance.level);
        timeplay.timeValue = StartGame.instance.levelData.list_data[StartGame.instance.level].Time;
        timeplay.timeValueLeft = StartGame.instance.levelData.list_data[StartGame.instance.level].Time;
        _countPlay = levelData.list_data[StartGame.instance.level].Count;
        Text_CountClick.text = _countPlay.ToString();
        NextLevel.SetActive(false);
        gameObject.SetActive(true);
    }

    public void LoserGame()
    {
        animator_Loser.SetTrigger("Button_Down");
    }

    public void CountPlayGame()
    {
        _countPlay--;
        UI_Manager.instance.Text_CountClick.text = _countPlay.ToString();
        if (_countPlay <= 1)
        {
            LoserGame();
        }
    }

    public void PlayGame()
    {
        ADS.SetActive(false);
        StartCoroutine(nameof(DelayGame));
    }

    private IEnumerator DelayGame()
    {
        var a = SceneManager.LoadSceneAsync(StartGame.instance.level);
        while (!a.isDone)
        {
            yield return null;
        }
        //Debug.Log(SceneManager.GetActiveScene().name);
        if (TapToTutorials.instance != null)
        {
            TapToTutorials.instance.StartTutorials();
        }

        if (TapTutorials2.instance != null)
        {
            TapTutorials2.instance.StartTutorials();
        }

        if (StartGame.instance.level == 0)
        {
            Text_Level.enabled = false;
            Text_CountClick.enabled = false;
            TimeBar.SetActive(false);
            Restart.SetActive(false);
            Skip.SetActive(false);
            TapToPlay.SetActive(false);
        }
        else
        {
            timeplay.timeValue = StartGame.instance.levelData.list_data[StartGame.instance.level].Time;
            timeplay.isStart = true;
            Click.isClick = true;
            Click.isStartGame = true;
            // button.SetActive(false);
            TapToPlay.SetActive(false);
            Text_Level.enabled = true;
            Text_CountClick.enabled = true;
            TimeBar.SetActive(true);
            Restart.SetActive(true);
            Skip.SetActive(true);
            //
        }
        Text_Level.text = "Level :" + (StartGame.instance.level).ToString();
        _countPlay = levelData.list_data[StartGame.instance.level].Count;
        Text_CountClick.text = _countPlay.ToString();
        Shop_.SetActive(false);
        gameObject.SetActive(false);
        gameObject.SetActive(true);
    }
}