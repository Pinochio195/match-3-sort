using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TapToTutorials : MonoBehaviour
{
    // Start is called before the first frame update
    //[SerializeField] private GameObject TapToPlay;

    [SerializeField] public GameObject HandTutorial;
    [SerializeField] private GameObject Tap1_FirstTime;
    [SerializeField] private GameObject Tap2_FirstTime;
    [SerializeField] private GameObject Tap1_SecondTime;
    [SerializeField] private GameObject Tap2_Secondime;
    private Vector3 FirstTime;
    private Vector3 SecondTime;
    public static TapToTutorials instance { get; private set; }

    private void Awake()
    {
        instance = this;
    }

    public void StartTutorials()
    {
        UI_Manager.instance.timeplay.isStart = true;
        Click1.isClick = true;
        Click1.StartGame = true;
        One_FirstTime();
    }

    public void One_FirstTime()
    {
        HandTutorial.SetActive(true);
        FirstTime = Tap1_FirstTime.transform.position;
        HandTutorial.transform.position = new Vector3(FirstTime.x + .35f, FirstTime.y + .5f, FirstTime.z - 2f);
    }

    public void One_SecondTime()
    {
        SecondTime = Tap2_FirstTime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(SecondTime.x + .85f, SecondTime.y + .5f, SecondTime.z - 2), .2f);
    }

    public void Two_FirstTime()
    {
        HandTutorial.SetActive(true);
        FirstTime = Tap1_SecondTime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(FirstTime.x + .35f, FirstTime.y + .5f, FirstTime.z - 2), .2f);
    }

    public void Two_SecondTime()
    {
        SecondTime = Tap2_Secondime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(SecondTime.x + .35f, SecondTime.y + .5f, SecondTime.z - 2), .2f);
    }
}