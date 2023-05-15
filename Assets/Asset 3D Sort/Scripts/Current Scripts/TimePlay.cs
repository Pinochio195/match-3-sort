using System;

using UnityEngine;
using UnityEngine.UI;

public class TimePlay : MonoBehaviour
{
    public float timeValue;
    public float timeValueLeft;
    [SerializeField] private Text timerText;
    public bool isStart;
    public static Action TesstCheck;
    [SerializeField] public GameObject Loser;
    [SerializeField] public GameObject Text_Loser;
    [SerializeField] private Image bar_Time;

    private void Start()
    {
        timeValue = StartGame.instance.levelData.list_data[StartGame.instance.level].Time;
        /* bar_Time.maxValue = timeValue;
         bar_Time.value = timeValue;*/
        bar_Time.fillAmount = timeValue;
        timeValueLeft = timeValue;
    }

    private void Update()
    {
        if (isStart)
        {
            if (timeValue > 0)
            {
                timeValue -= Time.deltaTime;
            }
            else
            {
                timeValue = 0;
            }
            DisplayTime(timeValue);
        }
        if (timeValue == 0)
        {
            Loser.SetActive(true);
            Text_Loser.SetActive(true);
            isStart = false;
            Click.isClick = false;
            Click.isStartGame = false;
        }
    }

    private void DisplayTime(float timeToDisPlay)
    {
        if (timeToDisPlay < 0)
        {
            timeToDisPlay = 0;
        }
        else if (timeToDisPlay > 0)
        {
            //timeToDisPlay += 1;
            bar_Time.fillAmount = timeToDisPlay / timeValueLeft;
        }
        float minutes = Mathf.FloorToInt(timeToDisPlay / 60);
        float seconds = Mathf.FloorToInt(timeToDisPlay % 60);
        timerText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }
}