using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AnimationMohawk : MonoBehaviour
{
    public string stateName;
    public bool alreadyPlayed = false;
    void OnTriggerEnter(Collider collider)
    {
        if (!alreadyPlayed)
        {
            GameObject[] characters = GameObject.FindGameObjectsWithTag("mohawk");
            foreach (var c in characters)
            {
                c.GetComponent<Animator>().Play(stateName);
            }
            alreadyPlayed=true;
        }


    }
}
