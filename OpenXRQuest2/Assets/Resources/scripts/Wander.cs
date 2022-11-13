using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

///--------------------------------
///   Author: Victor Alvarez, Ph.D.
///   Update: Valentin Dumitru
///   University of Oviedo, Spain
///--------------------------------

public class Wander : MonoBehaviour
{
    // Start is called before the first frame update

    [Range(1,10)] public float moveSpeed = 3f;
    [Range(10,200)]public float rotationSpeed = 100f;

    private bool isWandering = false;
    private bool isRotatingLeft = false;
    private bool isRotatingRight = false;
    private bool isWalking = false;

    // Update is called once per frame
    void Update()
    {
        if (isWandering == false)
        {
            StartCoroutine(GoWander());
        }
        if (isRotatingRight == true)
        {
            gameObject.GetComponent<Animator>().Play("idle");
            transform.Rotate(transform.up * Time.deltaTime * rotationSpeed);
        }
        if (isRotatingLeft == true)
        {
            gameObject.GetComponent<Animator>().Play("idle");
            transform.Rotate(transform.up * Time.deltaTime * -rotationSpeed);
        }
        if (isWalking == false && isRotatingLeft==false && isRotatingRight==false)
        {
            gameObject.GetComponent<Animator>().Play("idle");
        }
        if (isWalking == true)
        {
            gameObject.GetComponent<Animator>().Play("Run");
            transform.position += transform.forward * moveSpeed * Time.deltaTime;
        }
        
    }

    IEnumerator GoWander()
    {
        int rotationTime = Random.Range(1, 3);
        int rotateWait = Random.Range(1, 4);
        int rotationOrientation = Random.Range(1, 2);
        int walkWait = Random.Range(1, 5);
        int walkTime = Random.Range(1, 6);

        isWandering = true;
        
        yield return new WaitForSeconds(walkWait);
        isWalking = true;
        yield return new WaitForSeconds(walkTime);
        isWalking = false;
        yield return new WaitForSeconds(rotateWait);
        if (rotationOrientation == 1) // rotate right
        {
            isRotatingRight = true;
            yield return new WaitForSeconds(rotationTime);
            isRotatingRight = false;
        }
        if (rotationOrientation == 2) // rotate left
        {
            isRotatingLeft = true;
            yield return new WaitForSeconds(rotationTime);
            isRotatingLeft = false;
        }
        isWandering = false;
    }
}
