using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WayPointCharacter : MonoBehaviour
{
    public GameObject character;
    public Transform target;
    public float speed = 1.0f;
    
     float gravity = -9.81f;
    private Vector3 velocity;
    private CharacterController controller;
    private Animator animator;
    private bool stopCharacter = false;
  
    void Start()
    {
       animator = character.GetComponent <Animator>(); 
       controller = character.GetComponent <CharacterController>();
    }

    void Update()
    {
       if (!stopCharacter) 
       { 
        Vector3 relativePos = target.position - transform.position;
        Quaternion rotation = Quaternion.LookRotation(relativePos, Vector3.up * Time.deltaTime);
        transform.rotation = rotation;

        controller.Move(transform.forward * speed * Time.deltaTime);
        velocity.y += gravity * Time.deltaTime;
        controller.Move(velocity * Time.deltaTime);
        }
    }

    public void OnControllerColliderHit(ControllerColliderHit hit)
    {
        
        if (hit.gameObject.CompareTag("WayPoint"))
        {
            Debug.Log("Colision con waypoint");
            target = hit.gameObject.GetComponent<WayPoint>().nextWayPoint;
        }
       
       /* Cinematicas
        if (hit.gameObject.CompareTag("FinalWayPoint"))
        {
            Debug.Log("Colision con finalwaypoint");
            animator.SetTrigger("Attack");
            stopCharacter = true;
        }
        */
    }
}
