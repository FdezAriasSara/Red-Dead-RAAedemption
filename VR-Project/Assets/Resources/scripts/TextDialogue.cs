using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DialogueEditor;
using System.Configuration.Assemblies;

// IMPORTANT: This Script is a component of the PLAYER
// It includes two NPCs and conversations, adapt it to the number of NPCs and conversations in your scene.
// Change: Class properties and methods OnTriggerEnter and OnTriggerExit.

///--------------------------------
///   Author: Victor Alvarez, Ph.D.
///   University of Oviedo, Spain
///--------------------------------

public class TextDialogue : MonoBehaviour
{
    // * Class properties for two NPCs and conversations *
    public string NPC1Tag, NPC2Tag;
    public NPCConversation NPC1Conversation, NPC2Conversation;
    
    private float sensitivity = 0.18f;
    private float axisTimer, verticalAxis = 0f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
      
        if ((ConversationManager.Instance != null) & (ConversationManager.Instance.IsConversationActive))
        {
            verticalAxis = Input.GetAxis("Vertical");
            
            if (axisTimer >= sensitivity) 
                axisTimer = 0; 
            
            if (( axisTimer == 0) & (verticalAxis > 0))
            {
                ConversationManager.Instance.SelectPreviousOption();
            }
            else if (( axisTimer == 0) & (verticalAxis < 0))
            {
                ConversationManager.Instance.SelectNextOption();
            }
            else if (Input.GetAxis("Fire1") == 1)
            {
                ConversationManager.Instance.PressSelectedOption();
                axisTimer = 0;
                return;
            }
            
            axisTimer += Time.deltaTime;
        }        
    }

    void OnTriggerEnter(Collider collider)
    {
       // * Starts conversation for two NPCs 
 
        if(collider.gameObject.CompareTag(NPC1Tag))
        {
            ConversationManager.Instance.StartConversation(NPC1Conversation);
        }

        if(collider.gameObject.CompareTag(NPC2Tag))
        {
            ConversationManager.Instance.StartConversation(NPC2Conversation);
        }
    }

     void OnTriggerExit (Collider collider)
     {
       // * Ends conversation for two NPCs 
 
        if(collider.gameObject.CompareTag(NPC1Tag) || collider.gameObject.CompareTag(NPC2Tag))
        {
            ConversationManager.Instance.EndConversation();
        }
     }
}
