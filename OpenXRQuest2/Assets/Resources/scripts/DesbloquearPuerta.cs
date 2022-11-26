using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DesbloquearPuerta : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter(Collision collision)
    {
        Debug.Log("Colision");
        if (collision.gameObject.tag == "Key")
        {
            GameObject.FindWithTag("Gate").SetActive(false);
            GameObject.FindWithTag("Gate").SetActive(false);
            GameObject.FindWithTag("Key").SetActive(false);
        }
    }
}
