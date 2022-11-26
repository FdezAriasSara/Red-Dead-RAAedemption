using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Security;
using UnityEngine;
using UnityEngine.SceneManagement;
using DialogueEditor;
using System.Configuration.Assemblies;
///--------------------------------
///   Author: Victor Alvarez, Ph.D.
///   Conversation update:
///            Martin Beltran Diaz
///            A. Sito Martinez Rodriguez
///   University of Oviedo, Spain
///--------------------------------

public class MovementWithConversation : MonoBehaviour
{
    public CharacterController controller;
    public float speed = 8f;
    public float gravity = -9.81f;
    public float jumpHeight = 2f;

    public string goal ="chest";
    public string nextScene = "MenuVR"; 

    Vector3 velocity;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // Freezes character movement while a conversation is happening 
        if(ConversationManager.Instance == null || ( (ConversationManager.Instance != null) 
                                            & !ConversationManager.Instance.IsConversationActive)){
                    float x = Input.GetAxis("Horizontal");
                    float z = Input.GetAxis("Vertical");
                    
                    Vector3 move = transform.right * x + transform.forward * z;
                    controller.Move(move * speed * Time.deltaTime);

                    if (Input.GetButtonDown("Jump"))
                        velocity.y = Mathf.Sqrt (jumpHeight * -2f * gravity);
                    
                    velocity.y += gravity * Time.deltaTime;
                    controller.Move(velocity * Time.deltaTime);
        }
    }

    public void OnControllerColliderHit(ControllerColliderHit hit)
    {
        if (hit.gameObject.CompareTag(goal))
        {
            Debug.Log("I'm Late & Down the Rabbit Hole");
            SceneManager.LoadScene(nextScene);
        }        
    }
}
