using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.LegacyInputHelpers;

///--------------------------------
///   Author: Victor Alvarez, Ph.D.
///   University of Oviedo, Spain
///--------------------------------

public class NPCAudioDialogue : MonoBehaviour
{
    public AudioSource audioHello, audioGoodbye;
    public GameObject npc;
    private Boolean audioHelloWasPlayed = false;
    private Boolean audioGoodByeWasPlayed = false;
    private Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        if (animator == null)
            Debug.Log("missing animator component!");

    }

    void OnTriggerEnter(Collider collider)
    {
        if(collider.gameObject.CompareTag("Player") && !audioHelloWasPlayed)
        {         
                    
            audioHello.Play();
            audioHelloWasPlayed = true;
        }
    }

    void OnTriggerExit(Collider collider)
    {
        if(collider.gameObject.CompareTag("Player") && !audioGoodByeWasPlayed)
        {
         
                

            StartCoroutine(SayGoodBye());
        }
    }

    IEnumerator SayGoodBye()
    {
         audioGoodbye.Play();
         audioGoodByeWasPlayed = true;
        yield return new WaitUntil(()=>audioGoodbye.isPlaying == false);
      
    }   

}
