using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFindScript : MonoBehaviour
{
    // Start is called before the first frame updat
    
    public string goal ="Meta";

     void Start()
    {
         
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnCollisionEnter(Collision collision)
    {
        Debug.Log(collision.gameObject);
        if (collision.gameObject.CompareTag(goal))
        {
            Debug.Log("hola");
            
        }else{
            Debug.Log("PQ COJONES FALLA");
        }       
    }
}



