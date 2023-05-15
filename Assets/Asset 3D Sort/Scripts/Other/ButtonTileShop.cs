using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental;

public class ButtonTileShop : MonoBehaviour
{
    private List<GameObject> list_buttonTile;
    private Image image;
    [SerializeField] private List<Sprite> list_images;

    private void Start()
    {
        image = GetComponent<Image>();
        list_buttonTile = GameObject.FindGameObjectsWithTag("Button_Tile").ToList();
        for (int i = 1; i < list_buttonTile.Count; i++)
        {
            list_buttonTile[i].GetComponent<Image>().sprite = list_images[1];
            list_buttonTile[i].transform.GetChild(1).gameObject.SetActive(false);
        }
    }

    public void ChangeClick()
    {
        image.sprite = list_images[0];
        transform.GetChild(1).gameObject.SetActive(true);
        foreach (var item in list_buttonTile)
        {
            if (item.transform.transform.position != gameObject.transform.position)
            {
                item.GetComponent<Image>().sprite = list_images[1];
                item.transform.GetChild(1).gameObject.SetActive(false);
            }
        }
    }
}