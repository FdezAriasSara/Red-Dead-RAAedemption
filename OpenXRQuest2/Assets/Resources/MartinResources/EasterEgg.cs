using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EasterEgg : MonoBehaviour
{

    

     public AudioSource audio1;
      public AudioSource backgroundMusic;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }



    public void OnTriggerEnter(Collider collider){

        if(collider.gameObject.tag == "Player"){
            audio1.Play();
            backgroundMusic.Stop();
        }
    }


    public void OnTriggerExit(Collider collider){

        if(collider.gameObject.tag == "Player"){
            audio1.Stop();
            backgroundMusic.Play();

        }
    }



}
