using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapTutorials2 : MonoBehaviour
{
    // Start is called before the first frame update
    //[SerializeField] private GameObject TapToPlay;

    [SerializeField] public GameObject HandTutorial;
    [SerializeField] private GameObject Tap1_FirstTime;
    [SerializeField] private GameObject Tap1_SecondTime;
    [SerializeField] private GameObject Tap2_FirstTime;
    [SerializeField] private GameObject Tap2_Secondime;
    [SerializeField] private GameObject Tap3_FirstTime;
    [SerializeField] private GameObject Tap3_Secondime;
    [SerializeField] private GameObject Tap4_FirstTime;
    [SerializeField] private GameObject Tap4_Secondime;
    [SerializeField] private GameObject Tap5_FirstTime;
    [SerializeField] private GameObject Tap5_Secondime;
    [SerializeField] private GameObject Tap6_FirstTime;
    [SerializeField] private GameObject Tap6_Secondime;
    [SerializeField] private GameObject Tap7_FirstTime;
    [SerializeField] private GameObject Tap7_Secondime;
    private Vector3 FirstTime;
    private Vector3 SecondTime;
    public static TapTutorials2 instance { get; private set; }

    private void Awake()
    {
        instance = this;
    }

    public void StartTutorials()
    {
        UI_Manager.instance.timeplay.isStart = true;
        Click1.isClick = true;
        Click1.StartGame = true;
        Input();
    }

    public void Input()
    {
        HandTutorial.SetActive(true);
        FirstTime = Tap1_FirstTime.transform.position;
        HandTutorial.transform.position = new Vector3(FirstTime.x + .35f, FirstTime.y + .5f, FirstTime.z - 2f);
    }

    public void _1_()
    {
        SecondTime = Tap1_SecondTime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(SecondTime.x + .55f, SecondTime.y + .5f, SecondTime.z - 2), .2f);
    }

    public void _2_()
    {
        FirstTime = Tap2_FirstTime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(FirstTime.x + .35f, FirstTime.y + .5f, FirstTime.z - 2), .2f);
    }

    public void _3_()
    {
        SecondTime = Tap2_Secondime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(SecondTime.x + .35f, SecondTime.y + .5f, SecondTime.z - 2), .2f);
    }

    public void _4_()
    {
        FirstTime = Tap3_FirstTime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(FirstTime.x + .35f, FirstTime.y + .5f, FirstTime.z - 2), .2f);
    }

    public void _5_()
    {
        SecondTime = Tap3_Secondime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(SecondTime.x + .35f, SecondTime.y + .5f, SecondTime.z - 2), .2f);
    }

    public void _6_()
    {
        FirstTime = Tap4_FirstTime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(FirstTime.x + .55f, FirstTime.y + .5f, FirstTime.z - 2), .2f);
    }

    public void _7_()
    {
        SecondTime = Tap4_Secondime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(SecondTime.x + .35f, SecondTime.y + .5f, SecondTime.z - 2), .2f);
    }

    //
    public void _8_()
    {
        FirstTime = Tap5_FirstTime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(FirstTime.x + .35f, FirstTime.y + .5f, FirstTime.z - 4), .2f);
    }

    public void _9_()
    {
        SecondTime = Tap5_Secondime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(SecondTime.x + .35f, SecondTime.y + .5f, SecondTime.z - 4), .2f);
    }

    public void _10_()
    {
        FirstTime = Tap6_FirstTime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(FirstTime.x + .35f, FirstTime.y + .5f, FirstTime.z - 4), .2f);
    }

    public void _11_()
    {
        SecondTime = Tap6_Secondime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(SecondTime.x + .75f, SecondTime.y + .5f, SecondTime.z - 4), .2f);
    }

    public void _12_()
    {
        FirstTime = Tap7_FirstTime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(FirstTime.x + .35f, FirstTime.y + .5f, FirstTime.z - 4), .2f);
    }

    public void _13_()
    {
        SecondTime = Tap7_Secondime.transform.position;
        HandTutorial.transform.DOMove(new Vector3(SecondTime.x + .75f, SecondTime.y + .5f, SecondTime.z - 4), .2f);
    }
}