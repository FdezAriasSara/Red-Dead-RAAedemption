using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFindScript : MonoBehaviour
{
    // Start is called before the first frame updat
    
    public string goal ="Meta";
    public Object photo;

     void Start()
    {
         
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnCollisionEnter(Collision collision)
    {
        
        if (collision.gameObject.CompareTag(goal))
        {
            Destroy(gameObject,.5f);
            Destroy(photo,.5f);
        }    
    }
}



