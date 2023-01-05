using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChnageMission : MonoBehaviour
{

    public string nextScene;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


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


}
