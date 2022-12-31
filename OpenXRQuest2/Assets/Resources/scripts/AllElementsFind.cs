using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AllElementsFind : MonoBehaviour
{
    public string object1;
    public string object2;
    public string object3;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnCollisionEnter(Collision collision)
    {

        if (collision.gameObject.CompareTag(object1))
        {
            Debug.Log("hola1");
        }

        if (collision.gameObject.CompareTag(object2))
        {
            Debug.Log("hola2");
        }

        if (collision.gameObject.CompareTag(object2))
        {
            Debug.Log("hola2");
        }
    }
}
