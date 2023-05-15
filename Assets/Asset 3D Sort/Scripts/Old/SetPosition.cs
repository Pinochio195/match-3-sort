using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using DG.Tweening;
using IngameDebugConsole;

public class SetPosition : MonoBehaviour
{
    private float raylength = 4000;
    public LayerMask mask;
    private int click_Count = 0;
    private Vector3 Position_1;
    private Vector3 Position_2;

    private List<Transform> List_FirstClick;
    private List<Transform> List_SecondClick;
    private bool isCheck;
    private int CountCheck;

    [Range(0.1f, .75f)]
    [SerializeField] private float TimeSpeedPlayer = 2f;

    private Transform Ex_FirstClick;

    [Range(0.15f, 0.5f)]
    [SerializeField]
    private float SpeedDisplayObject;

    public static SetPosition instance { get; set; }

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        //PlayerPrefs.SetInt(nameof(ClickTIme),0);
    }

    private void Update()
    {
        ClickObject();
        //DebugLogConsole.AddCommand("destroy", "Destroys " + name, ClickObject);
    }

    private void ClickObject()
    {
        if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
        {
            RaycastHit ray;
            Ray ray1 = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray1, out ray, raylength, mask))
            {
                if (click_Count == 0 && !ray.collider.CompareTag("Empty"))
                {
                    List_FirstClick = new List<Transform>();
                    Ex_FirstClick = ray.collider.gameObject.transform;
                    if (PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 0)
                    {
                        List_FirstClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)]);

                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                        {
                            List_FirstClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                        }
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 2].tag))
                        {
                            List_FirstClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 2]);
                        }
                    }
                    else if (PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 1)
                    {
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                        {
                            List_FirstClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                        }

                        List_FirstClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)]);

                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                        {
                            List_FirstClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                        }
                    }
                    else if (PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 2)
                    {
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 2].tag))
                        {
                            List_FirstClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 2]);
                        }
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                        {
                            List_FirstClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                        }

                        List_FirstClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)]);
                    }
                    for (int i = 0; i < List_FirstClick.Count; i++)
                    {
                        List_FirstClick[i].DOMoveZ(-.75f, SpeedDisplayObject);
                    }

                    click_Count++;
                    ///<summary>
                    ///
                    ///
                    //=====>DONE List_FirstClick
                    ///
                    ///
                    /// </summary>
                }
                //Check bug
                else if (click_Count == 1 && ray.collider.transform != Ex_FirstClick && !ray.collider.CompareTag("Empty"))
                {
                    //PutDownObject
                    for (int i = 0; i < List_FirstClick.Count; i++)
                    {
                        List_FirstClick[i].DOMoveZ(0f, SpeedDisplayObject);
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
                        List_FirstClick[i].DOMoveZ(0f, SpeedDisplayObject);
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
                    if (PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 0)
                    {
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].tag))
                        {
                            List_SecondClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)]);
                        }
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                        {
                            List_SecondClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                        }
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 2].tag))
                        {
                            List_SecondClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 2]);
                        }
                    }
                    else if (PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 1)
                    {
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                        {
                            List_SecondClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                        }
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].tag))
                        {
                            List_SecondClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)]);
                        }
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 1].tag))
                        {
                            List_SecondClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) + 1]);
                        }
                    }
                    else if (PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) % 3 == 2)
                    {
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 2].tag))
                        {
                            List_SecondClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 2]);
                        }
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 1].tag))
                        {
                            List_SecondClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform) - 1]);
                        }
                        if (PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].CompareTag(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)].tag))
                        {
                            List_SecondClick.Add(PlaceObjectInGrid.instance.list[PlaceObjectInGrid.instance.GetIndex(ray.collider.gameObject.transform)]);
                        }
                    }
                    ///
                    //====> DONE List_SecondClick
                    ///
                    //===============================================================================================================================
                    StartCoroutine(MoveOb());
                    click_Count = 0;
                }
            }
        }
    }

    private bool CheckWinnerForAll()
    {
        for (int i = 0; i < 36; i++)
        {
            if (i % 3 == 1 && !PlaceObjectInGrid.instance.list[i].CompareTag("Empty"))
            {
                if (PlaceObjectInGrid.instance.list[i].CompareTag(PlaceObjectInGrid.instance.list[i - 1].tag) && PlaceObjectInGrid.instance.list[i].CompareTag(PlaceObjectInGrid.instance.list[i + 1].tag))
                {
                    CountCheck++;
                }
                else
                {
                    CountCheck = 0;
                }
            }
        }
        if (CountCheck >= 10)
        {
            isCheck = true;
        }
        else
        {
            CountCheck = 0;
        }
        return isCheck;
    }

    private IEnumerator PutDownOBject(int count)
    {
        yield return new WaitForSeconds(.3f);
        for (int i = 0; i < count; i++)
        {
            if (count - i > 0)
            {
                List_FirstClick[count - i].DOMoveZ(0f, SpeedDisplayObject);
            }
        }
    }

    private IEnumerator MoveOb()
    {
        for (int CountMove = 0; CountMove < Mathf.Min(List_FirstClick.Count, List_SecondClick.Count); CountMove++)
        {
            Position_1 = List_FirstClick[CountMove].position;
            Position_2 = List_SecondClick[CountMove].position;
            List<Vector3> list = new List<Vector3>();
            list.Add(new Vector3((Position_2.x + List_FirstClick[CountMove].position.x) / 2, (Position_2.y + List_FirstClick[CountMove].position.y) / 2, List_FirstClick[CountMove].position.z - 1.25f));
            list.Add(Position_2);
            float X = Vector3.Distance(List_FirstClick[CountMove].position, Position_2);
            //All box is disable
            //Disable Box
            for (int i = 0; i < PlaceObjectInGrid.instance.list.Count; i++)
            {
                PlaceObjectInGrid.instance.list[i].GetComponent<BoxCollider>().enabled = false;
            }
            //Disable Box
            List_FirstClick[CountMove].DOPath(list.ToArray(), X * TimeSpeedPlayer, PathType.CatmullRom);
            StartCoroutine(DelayBoxcollider(X * TimeSpeedPlayer));
            List_SecondClick[CountMove].DOMove(new Vector3(Position_1.x, Position_1.y, Position_1.z + .75f), .1f);

            PlaceObjectInGrid.instance.CheckWin(List_FirstClick[CountMove].position, List_SecondClick[CountMove].position);
            if (CountMove == Mathf.Min(List_FirstClick.Count, List_SecondClick.Count) - 1)
            {
                int a = List_FirstClick.Count - List_SecondClick.Count < 0 ? 0 : List_FirstClick.Count - List_SecondClick.Count;
                if (List_FirstClick.Count - List_SecondClick.Count < 0)
                {
                    //Debug.Log(List_FirstClick.Count - List_SecondClick.Count);
                }
                StartCoroutine(PutDownOBject(a));
            }
            if (CheckWinnerForAll())
            {
                UI_Manager.instance.winner.Next_Level.SetActive(true);
                //Debug.Log("Winner");
            }
            yield return new WaitForSeconds(.3f);
        }
    }

    private IEnumerator DelayBoxcollider(float delaytime)
    {
        yield return new WaitForSeconds(delaytime + .1f);
        for (int i = 0; i < PlaceObjectInGrid.instance.list.Count; i++)
        {
            PlaceObjectInGrid.instance.list[i].GetComponent<BoxCollider>().enabled = true;
        }
    }
}