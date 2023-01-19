using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RightHandShoot : MonoBehaviour
{
     public VRGun gun;
    private bool isGun = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger, OVRInput.Controller.RTouch) && isGun == true){
            gun.Fire();
       }
    }

    public void OnTriggerEnter(Collider other){
        if(other.gameObject.CompareTag("Gun")){
           isGun = true;
        }
    }

    public void OnTriggerExit(Collider other){
        if(other.gameObject.CompareTag("Gun")){
           isGun = false;
        }
    }
}
