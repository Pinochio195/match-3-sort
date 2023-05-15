using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropDownAnimals : MonoBehaviour
{
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("Ground") && Click.instance.click_Count_AniOnFloor != 0)
        {
            AudioManager.instance.PlaySound(AudioManager.instance.SoundMove[2], 1);
            Click.instance.click_Count_AniOnFloor--;
        }
    }
}