using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResultMurder : MonoBehaviour
{


    public string nextScene;

    public AudioSource audioMalaEleccion;
    public AudioSource audioBuenaEleccion;

    bool reproducido = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnTriggerEnter(Collider collider){

        if(collider.gameObject.tag == "fotoCorrecta"){
            Debug.Log("Colision con foto correcta");
            
            if(reproducido == false){
                reproducido = true;
                StartCoroutine(playCorrectSound());
                
            }

        }else if(collider.gameObject.tag == "fotoWrong"){
            
            Debug.Log("Colision con foto inc");
            audioMalaEleccion.Play();

        }
    }


    public void OnTriggerExit(Collider collider){


        audioMalaEleccion.Stop();

        
    }

     IEnumerator playCorrectSound()
    {
            
        audioBuenaEleccion.Play();
        yield return new WaitForSeconds(audioBuenaEleccion.clip.length+3);

        SceneManager.LoadScene(nextScene);
            

               
             
            
    }

}
