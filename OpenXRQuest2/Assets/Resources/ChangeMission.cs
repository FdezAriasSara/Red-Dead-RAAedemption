using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeMission : MonoBehaviour
{

    public string nextScene;
    


     public void OnControllerColliderHit(ControllerColliderHit hit){

        Debug.Log("Colision con player");
        if(hit.gameObject.CompareTag("Player")){
            SceneManager.LoadScene(nextScene);
        }
    }


    public void OnColliderEnter(Collider collider){

        Debug.Log("Colision con player");
        if(collider.gameObject.CompareTag("Player")){
            SceneManager.LoadScene(nextScene);
        }
    }


    public void OnTriggerEnter(Collider collider){

       
            Debug.Log("Colision con mision");
            
           SceneManager.LoadScene(nextScene);

    }


}
