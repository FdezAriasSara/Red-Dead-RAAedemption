using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target2 : MonoBehaviour
{
    float rotationSpeed = 60;
    Vector3 currentEulerAngles;

    public Transform pivotPoint;

    private bool isActivated = true;

    private float waitTime = 5f;
    private float timer = 1.0f;

    public GameManager gameManager;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if(isActivated && pivotPoint.transform.rotation.z < 0f){
            currentEulerAngles += new Vector3(0,0,5) * Time.deltaTime * rotationSpeed;
            pivotPoint.transform.localEulerAngles = currentEulerAngles;
        }
        if(!isActivated && pivotPoint.transform.rotation.z > -0.7f){
            currentEulerAngles += new Vector3(0,0,-5) * Time.deltaTime * rotationSpeed;
            pivotPoint.transform.localEulerAngles = currentEulerAngles;
        
        }
        
       if(timer > waitTime && !isActivated){
            Activate();
            timer = 0;
       }else if(!isActivated){
            timer += Time.deltaTime;
       }
    }

    public void Activate(){
        isActivated = true;
    }

    public void Desactivate(){
        isActivated = false;
    }

    public void Hit(){
        if(isActivated){
            Desactivate();
            gameManager.AddPoints(1);
        }

    }

    // Rotar hasta -90 (desactivado) y 0 activado
}
