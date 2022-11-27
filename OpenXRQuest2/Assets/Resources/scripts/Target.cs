using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{
   
    [SerializeField] private Transform brokenBottle;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Damage(){
        Instantiate(brokenBottle, transform.position, transform.rotation);
        Destroy(gameObject);
    }

}
