using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using DG.Tweening;
using System;
using System.Linq;
using UnityEngine.UI;

public class Click : MonoBehaviour
{
    private float raylength = 4000;
    public LayerMask mask;
    public int click_Count = 0;
    public int click_Count_AniOnFloor = 0;
    private Vector3 Position_1;
    private Vector3 Position_2;
    private int CountCheck;
    public List<Transform> List_FirstClick;
    private List<Transform> List_SecondClick;
    [SerializeField] private List<Transform> List_AnimalsDrop;
    private Transform LastAnimalDrop;

    //private int isCheck = 0;
    //private bool isCheck;
    private int isCheck;

    [Range(0.1f, .75f)]
    [SerializeField] private float TimeSpeedPlayer = 2f;

    [SerializeField] private GameObject audio;
    private Transform Ex_FirstClick;
    private int b = 0;

    [Range(0.15f, 0.5f)]
    [SerializeField]
    private float SpeedDisplayObject;

    public static bool isClick;
    public static bool isStartGame;
    public static Click instance { get; set; }

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.K))
        {
            isClick = !isClick;
            if (isClick)
            {
                Debug.Log("Option 2");
            }
            else
            {
                Debug.Log("Option 1");
            }
        }
        if (isStartGame)
        {
            if (!isClick)
            {
                //Click1Object();
            }
            else
            {
                ClickObject();
            }
        }
    }

    #region
    /*
        private void Click1Object()
        {
            if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
            {
                RaycastHit ray;
                Ray ray1 = Camera.main.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray1, out ray, raylength, mask))
                {
                    if (click_Count == 0 && !ray.collider.CompareTag("Empty"))
                    {
                        for (int i = 0; i < List_FirstClick.Count; i++)
                        {
                            Debug.Log(List_FirstClick[i].name + "Name");
                        }
                        List_FirstClick = new List<Transform>();
                        //Ex_FirstClick = ray.collider.gameObject.transform;
                        List_FirstClick.Add(ray.collider.gameObject.transform);
                        for (int i = 0; i < List_FirstClick.Count; i++)
                        {
                            List_FirstClick[i].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                        }
                        click_Count++;
                    }
                    //Check bug
                    else if (click_Count == 1 && ray.collider.transform != Ex_FirstClick && !ray.collider.CompareTag("Empty"))
                    {
                        //PutDownObject
                        for (int i = 0; i < List_FirstClick.Count; i++)
                        {
                            List_FirstClick[i].DOLocalMoveZ(0f, SpeedDisplayObject);
                        }
                        //PutDownObject
                        List_FirstClick = new List<Transform>();
                        Position_1 = new Vector3();
                        Position_2 = new Vector3();
                        click_Count = 0;
                        //Debug.Log("Khác empty");
                    }
                    else if (click_Count == 1 && ray.collider.transform == Ex_FirstClick)
                    {
                        //PutDownObject
                        for (int i = 0; i < List_FirstClick.Count; i++)
                        {
                            List_FirstClick[i].DOLocalMoveZ(0f, SpeedDisplayObject);
                        }
                        //PutDownObject
                        List_FirstClick = new List<Transform>();
                        Position_1 = new Vector3();
                        Position_2 = new Vector3();
                        click_Count = 0;
                        //Debug.Log("Trùng click");
                    }
                    else if (click_Count == 0 && ray.collider.CompareTag("Empty"))
                    {
                        //Debug.Log("Nothing!");
                    }
                    //Check bug
                    else if (click_Count == 1 && ray.collider.CompareTag("Empty"))
                    {
                        List_SecondClick = new List<Transform>();
                        List_SecondClick.Add(ray.collider.gameObject.transform);//lỗi bị lấy phần tử đầu ở đây, lấy ntn thì ổn những ko đc get index

                        StartCoroutine(MoveOb());
                        int bb = CheckWinnerForAll();
                        if (bb >= CreateOb.instance.ParentPosition.Count)
                        {
                            Winner.instance.button.SetActive(true);
                        }
                        click_Count = 0;
                    }
                }
            }
        }
    */
    #endregion

    private void ClickObject()
    {
        if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
        {
            RaycastHit ray;
            Ray ray1 = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray1, out ray, raylength, LayerMask.GetMask("Default")))
            {
                if (CreateOb.instance.list.Contains(ray.collider.transform))
                {
                    if (click_Count == 0 && !ray.collider.CompareTag("Empty"))
                    {
                        AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                        List_FirstClick = new List<Transform>();
                        Ex_FirstClick = ray.collider.gameObject.transform;
                        if (CreateOb.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 0)
                        {
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 2].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 2]);
                            }
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                            }
                            List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)]);
                        }
                        else if (CreateOb.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 1)
                        {
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                            }
                            List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)]);

                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                            }
                        }
                        else if (CreateOb.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 2)
                        {
                            List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)]);
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                            }
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 2].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 2]);
                            }
                        }
                        for (int i = 0; i < List_FirstClick.Count; i++)
                        {
                            //List_FirstClick[i].DOKill();
                            List_FirstClick[i].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                        }
                        for (int i = 0; i < List_AnimalsDrop.Count; i++)
                        {
                            List_AnimalsDrop[i].gameObject.GetComponent<Rigidbody>().isKinematic = false;
                        }
                        click_Count++;
                        ///<summary>
                        ///
                        ///
                        //=====>DONE List_FirstClick
                        ///
                        ///
                        /// </summary>
                        ///
                    }
                    //Check bug
                    else if (click_Count == 1 && ray.collider.transform != Ex_FirstClick && !ray.collider.CompareTag("Empty"))
                    {
                        //PutDownObject
                        for (int i = 0; i < List_FirstClick.Count; i++)
                        {
                            //List_FirstClick[i].DOKill();
                            List_FirstClick[i].DOLocalMoveZ(0f, SpeedDisplayObject);
                        }
                        for (int i = 0; i < List_AnimalsDrop.Count; i++)
                        {
                            List_AnimalsDrop[i].gameObject.GetComponent<Rigidbody>().isKinematic = false;
                        }
                        //PutDownObject
                        List_FirstClick = new List<Transform>();
                        AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                        #region Change in Second Time

                        Ex_FirstClick = ray.collider.gameObject.transform;
                        if (CreateOb.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 0)
                        {
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 2].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 2]);
                            }
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                            }
                            List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)]);
                        }
                        else if (CreateOb.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 1)
                        {
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                            }
                            List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)]);

                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                            }
                        }
                        else if (CreateOb.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 2)
                        {
                            List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)]);
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                            }
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 2].tag))
                            {
                                List_FirstClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 2]);
                            }
                        }
                        for (int i = 0; i < List_FirstClick.Count; i++)
                        {
                            //List_FirstClick[i].DOKill();
                            List_FirstClick[i].DOLocalMoveZ(+.75f, SpeedDisplayObject);
                        }

                        #endregion Change in Second Time

                        Position_1 = new Vector3();
                        Position_2 = new Vector3();
                        click_Count = 1;
                        //Debug.Log("Khác empty");
                    }
                    else if (click_Count == 1 && ray.collider.transform == Ex_FirstClick)
                    {
                        //PutDownObject
                        for (int i = 0; i < List_FirstClick.Count; i++)
                        {
                            //List_FirstClick[i].DOKill();
                            List_FirstClick[i].DOLocalMoveZ(0f, SpeedDisplayObject);
                        }
                        //PutDownObject
                        List_FirstClick = new List<Transform>();
                        Position_1 = new Vector3();
                        Position_2 = new Vector3();
                        click_Count = 0;
                        //Debug.Log("Trùng click");
                    }
                    /*else if (click_Count == 0 && ray.collider.CompareTag("Empty"))
                    {
                        //Debug.Log(ray.collider.tag);
                        Debug.Log(click_Count_AniOnFloor);
                    }     */               //Check bug
                    else if (click_Count == 1 && ray.collider.CompareTag("Empty"))
                    {
                        AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                        List_SecondClick = new List<Transform>();
                        if (CreateOb.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 0)
                        {
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 2].tag))
                            {
                                List_SecondClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 2]);
                            }
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                            {
                                List_SecondClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                            }
                            List_SecondClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)]);
                        }
                        else if (CreateOb.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 1)
                        {
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                            {
                                List_SecondClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                            }

                            List_SecondClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)]);

                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                            {
                                List_SecondClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                            }
                        }
                        else if (CreateOb.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 2)
                        {
                            List_SecondClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)]);
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                            {
                                List_SecondClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                            }
                            if (CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 2].tag))
                            {
                                List_SecondClick.Add(CreateOb.instance.list[CreateOb.instance.GetIndex(ray.collider.gameObject.transform) - 2]);
                            }
                        }

                        ///<summary>
                        ///
                        ///
                        //=====>DONE List_SecondClick
                        ///
                        ///
                        /// </summary>
                        StartCoroutine(MoveOb());
                        UI_Manager.instance.CountPlayGame();
                        click_Count = 0;
                    }
                    else if (click_Count_AniOnFloor == 1 && click_Count == 0 && ray.collider.CompareTag("Empty"))
                    {
                        AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[1], 1);
                        StartCoroutine(MoveAnimalsDrop(LastAnimalDrop, ray.collider.transform));
                        UI_Manager.instance.CountPlayGame();
                        click_Count_AniOnFloor = 0;
                    }
                }
                else
                {
                    if (click_Count_AniOnFloor == 0)
                    {
                        AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                        ray.collider.gameObject.GetComponent<Rigidbody>().isKinematic = true;
                        ray.collider.transform.DOMoveY(ray.collider.transform.position.y + .95f, SpeedDisplayObject);
                        LastAnimalDrop = ray.collider.transform;
                        click_Count_AniOnFloor++;
                        for (int i = 0; i < List_FirstClick.Count; i++)
                        {
                            List_FirstClick[i].DOLocalMoveZ(0f, SpeedDisplayObject);
                        }
                        click_Count = 0;
                    }
                    else if (click_Count_AniOnFloor == 1 && ray.collider.transform != LastAnimalDrop)
                    {
                        for (int i = 0; i < List_AnimalsDrop.Count; i++)
                        {
                            if (ray.collider.transform == List_AnimalsDrop[i])
                            {
                                List_AnimalsDrop[i].gameObject.GetComponent<Rigidbody>().isKinematic = true;
                            }
                            else
                            {
                                List_AnimalsDrop[i].gameObject.GetComponent<Rigidbody>().isKinematic = false;
                            }
                        }
                        AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[0], 1);
                        ray.collider.transform.DOMoveY(ray.collider.transform.position.y + .95f, SpeedDisplayObject);
                        click_Count_AniOnFloor++;
                        LastAnimalDrop = ray.collider.transform;
                    }
                    else if (click_Count_AniOnFloor == 1 && ray.collider.transform == LastAnimalDrop)
                    {
                        ray.collider.gameObject.GetComponent<Rigidbody>().isKinematic = false;
                        LastAnimalDrop = ray.collider.transform;
                    }
                }
            }
        }
    }

    private IEnumerator MoveAnimalsDrop(Transform DropAnimals, Transform Empty)
    {
        for (int CountMove = 0; CountMove < 1; CountMove++)
        {
            Transform Position_1_ = DropAnimals;
            Transform Position_2_ = Empty;

            List<Vector3> list = new List<Vector3>();
            list.Add(new Vector3((Position_2_.position.x + DropAnimals.position.x) / 2, (Position_2_.position.y + DropAnimals.position.y) / 2, DropAnimals.position.z - 1.25f));
            list.Add(Position_2_.position);
            float X = Vector3.Distance(DropAnimals.position, Position_2_.position);
            DropAnimals.DOPath(list.ToArray(), X * TimeSpeedPlayer, PathType.CatmullRom);
            Empty.DOMove(Position_1_.position, .1f);
            DropAnimals.rotation = Empty.rotation;
            DropAnimals.parent = Empty.parent;
            DropAnimals.gameObject.GetComponent<Rigidbody>().isKinematic = true;
            List_AnimalsDrop.Remove(DropAnimals);
            int a = CreateOb.instance.list.IndexOf(Empty);
            CreateOb.instance.list[a] = DropAnimals;
            Destroy(Empty.gameObject);
            if (CheckWinnerForAll() >= CreateOb.instance.ParentPosition.Count && List_AnimalsDrop.Count == 0)
            {
                UI_Manager.instance.winner.Next_Level.SetActive(true);
                UI_Manager.instance.FireWin1.Play();
                UI_Manager.instance.FireWin2.Play();
                UI_Manager.instance.Check_Vibrate();
                UI_Manager.instance.timeplay.isStart = false;
                isStartGame = false;
            }
            Debug.Log(List_AnimalsDrop.Count);
            yield return new WaitForSeconds(.3f);
        }
    }

    private IEnumerator MoveOb()
    {
        for (int CountMove = 0; CountMove < Mathf.Min(List_FirstClick.Count, List_SecondClick.Count); CountMove++)
        {
            Transform ExSample;
            Transform Position_1_ = List_FirstClick[CountMove];
            Transform Position_2_ = List_SecondClick[CountMove];
            //Position_1 = List_FirstClick[CountMove].position;
            //Position_2 = List_SecondClick[CountMove].position;
            List<Vector3> list = new List<Vector3>();
            list.Add(new Vector3((Position_2_.position.x + List_FirstClick[CountMove].position.x) / 2, (Position_2_.position.y + List_FirstClick[CountMove].position.y) / 2, List_FirstClick[CountMove].position.z - 1.25f));
            list.Add(Position_2_.position);
            float X = Vector3.Distance(List_FirstClick[CountMove].position, Position_2_.position);
            //All box is disable
            //Disable Box
            for (int i = 0; i < CreateOb.instance.list.Count; i++)
            {
                CreateOb.instance.list[i].GetComponent<BoxCollider>().enabled = false;
            }

            List_FirstClick[CountMove].DOPath(list.ToArray(), X * TimeSpeedPlayer, PathType.CatmullRom);
            StartCoroutine(DelayBoxcollider(X * TimeSpeedPlayer));
            //List_SecondClick[CountMove].DOMove(new Vector3(Position_1_.position.x, Position_1_.position.y, Position_1_.position.z + .75f), .1f);
            List_SecondClick[CountMove].DOMove(Position_1_.position, .1f);
            //set parent
            ExSample = List_FirstClick[CountMove].parent;
            List_FirstClick[CountMove].parent = List_SecondClick[CountMove].parent;
            List_SecondClick[CountMove].parent = ExSample;
            List_SecondClick[CountMove].DOLocalMoveZ(0, .1f);
            CreateOb.instance.CheckWin(List_FirstClick[CountMove], List_SecondClick[CountMove]);
            if (CountMove == Mathf.Min(List_FirstClick.Count, List_SecondClick.Count) - 1)
            {
                int a = List_FirstClick.Count - List_SecondClick.Count < 0 ? 0 : List_FirstClick.Count - List_SecondClick.Count;
                if (List_FirstClick.Count - List_SecondClick.Count < 0)
                {
                    //Debug.Log(List_FirstClick.Count - List_SecondClick.Count);
                }
                StartCoroutine(PutDownOBject(a));
            }

            if (CheckWinnerForAll() >= CreateOb.instance.ParentPosition.Count && List_AnimalsDrop.Count == 0)
            {
                UI_Manager.instance.winner.Next_Level.SetActive(true);
                UI_Manager.instance.FireWin1.Play();
                UI_Manager.instance.FireWin2.Play();
                UI_Manager.instance.Check_Vibrate();
                UI_Manager.instance.timeplay.isStart = false;
                UI_Manager.instance.Bonus.SetActive(true);
                if ((StartGame.instance.level) % 5 == 0)
                {
                    StartGame.instance.BonusAnimals++;
                    UI_Manager.instance.AnimalsLight.GetComponent<Image>().fillAmount = 0;
                }
                //bonus
                UI_Manager.instance.AnimalsDark.GetComponent<Image>().sprite = UI_Manager.instance.list_Bonus[StartGame.instance.BonusAnimals];
                UI_Manager.instance.AnimalsLight.GetComponent<Image>().sprite = UI_Manager.instance.list_Bonus[StartGame.instance.BonusAnimals];
                UI_Manager.instance.AnimalsLight.GetComponent<Image>().fillAmount += 0.2f;
                isStartGame = false;
            }
            yield return new WaitForSeconds(.15f);
        }
    }

    private IEnumerator PutDownOBject(int count)
    {
        yield return new WaitForSeconds(.3f);

        //Console.WriteLine(b);
        b = List_FirstClick.IndexOf(List_FirstClick.Last());
        for (int i = 0; i < count; i++)
        {
            Debug.Log(count);
            Debug.Log(b);
            List_FirstClick[b].DOLocalMoveZ(0f, SpeedDisplayObject);
            b--;
            //Debug.Log(i);
        }
    }

    private IEnumerator DelayBoxcollider(float delaytime)
    {
        yield return new WaitForSeconds(delaytime + .1f);
        for (int i = 0; i < CreateOb.instance.list.Count; i++)
        {
            CreateOb.instance.list[i].GetComponent<BoxCollider>().enabled = true;
        }
    }

    private int CheckWinnerForAll()
    {
        for (int i = 0; i < CreateOb.instance.list.Count; i++)
        {
            if (i % 3 == 1)
            {
                if (CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i - 1].tag) && CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i + 1].tag))
                {
                    isCheck++;
                }
                if (!CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i - 1].tag) || !CreateOb.instance.list[i].CompareTag(CreateOb.instance.list[i + 1].tag))
                {
                    isCheck = 0;
                }
            }
        }

        return isCheck;
    }
}