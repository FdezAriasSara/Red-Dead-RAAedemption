using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeakOutLoud : MonoBehaviour
{
    public AudioClip SoundToPlay;
    public float Volume=1;
    public AudioSource audiosrc;
    public bool alreadyPlayed = false;


    public void OnTriggerEnter(Collider other)

    {
        
        if (!alreadyPlayed && other.CompareTag("Player"))
        {
           
         
            audiosrc.PlayOneShot(SoundToPlay, Volume);
    
            alreadyPlayed = true;
        }
    }
}
