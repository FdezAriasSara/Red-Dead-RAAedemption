using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConversationNPC : MonoBehaviour
{

    

     public AudioSource audio1;
      public AudioSource audio2;

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
            Debug.Log("Colision con player");
            
          
            StartCoroutine(playEngineSound());

        }
    }


    public void OnTriggerExit(Collider collider){

        if(collider.gameObject.tag == "Player"){
            audio1.Stop();
            audio2.Stop();

        }
    }


    IEnumerator playEngineSound()
    {
             //play each audio
            if(audio1 != null){
                audio1.Play();
                yield return new WaitForSeconds(audio1.clip.length);
            }

            if(audio2 != null){

                audio2.Play();
                yield return new WaitForSeconds(audio2.clip.length);

            }
               
             
            
    }


}
