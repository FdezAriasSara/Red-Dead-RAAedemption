using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class knifeThrowing : MonoBehaviour{
    [Header ("References")]
    public Transform ca;
    public Transform target;
    public GameObject objectToThrow;

    [Header ("Settings")]
    public int totalTrows;
    public float throwCoolDown;

    [Header ("Throwing")]
    public KeyCode throwKey =KeyCode.Mouse0;
    public float throwForce;
    public float throwUpwardForce;

    bool readyToThrow;
    private void Start(){
        readyToThrow=true;
    }

    private void Update(){

        if(Input.GetKeyDown(throwKey) && readyToThrow && totalTrows>0){
            Throw();
        }
    }
    private void Throw(){
        readyToThrow=false;
        //instantiate knife
        GameObject projectile=Instantiate(objectToThrow, attackPoint.position, cam.rotation);

        //get rigidbody component
        rigidbody projectileRb=projectile.GetComponent<RigidBody>();

        //add force
        Vector3 forceToAdd=cam.transform.forward*throwForce+transform.up*throwUpwardForce;

        projectileRb.AddForce(forceToAdd,ForceMode.Impulse);

        totalTrows--;

        //implement throwCooldown

    }
    private void ResetThrow(){
        readyToThrow=true;
    }
}