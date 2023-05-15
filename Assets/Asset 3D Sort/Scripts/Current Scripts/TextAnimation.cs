using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextAnimation : MonoBehaviour
{
    [SerializeField] private Animator animator;

    // Start is called before the first frame update
    private void Update()
    {
        animator.Play("TextStartGame");
    }
}