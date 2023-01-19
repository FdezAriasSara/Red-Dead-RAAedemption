using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{
   
    [SerializeField] private Transform brokenBottle;
    public GameManager gameManager;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Damage(){
        gameManager.AddPoints(5);
        Instantiate(brokenBottle, transform.position, transform.rotation);
        Destroy(gameObject);
    }

}
