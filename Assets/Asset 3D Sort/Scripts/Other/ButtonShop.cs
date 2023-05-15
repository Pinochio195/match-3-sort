using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ButtonShop : MonoBehaviour
{
    private GameObject button;
    private List<GameObject> list_button;

    private void Start()
    {
        button = transform.GetChild(0).gameObject;
        list_button = GameObject.FindGameObjectsWithTag("Button").ToList();
    }

    public void ClickButtonShop()
    {
        button.SetActive(true);
        foreach (var item in list_button)
        {
            if (item.transform.transform.position != button.transform.position)
            {
                item.transform.GetChild(0).gameObject.SetActive(false);
            }
        }
    }
}