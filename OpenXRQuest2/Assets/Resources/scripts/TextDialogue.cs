using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DialogueEditor;
using System.Configuration.Assemblies;

public class TextDialogue : MonoBehaviour
{
    // * Class properties for two NPCs and conversations *
    public string NPC1Tag, NPC2Tag;
    public NPCConversation NPC1Conversation, NPC2Conversation;
    public NPCConversation myConversation;

    private float sensitivity = 0.18f;
    private float axisTimer, verticalAxis = 0f;

    // Start is called before the first frame update
    void Start()
    {


    }

    // Update is called once per frame
    void Update()
    {
        float verticalAxis = Input.GetAxis("Vertical");
        if ((ConversationManager.Instance != null) & (ConversationManager.Instance.IsConversationActive))
        {
            StartCoroutine(Conversation(verticalAxis));
        }
    }

    public IEnumerator Conversation(float verticalAxis)
    {
        if (verticalAxis > 0)
        {
            ConversationManager.Instance.SelectPreviousOption();
            yield return new WaitForSecondsRealtime(5);
        }
        else if (verticalAxis < 0)
        {
            ConversationManager.Instance.SelectNextOption();
            yield return new WaitForSecondsRealtime(5);
        }
        else if (Input.GetAxis("Fire1") == 1)
        {
            ConversationManager.Instance.PressSelectedOption();
        }

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
            }

            axisTimer += Time.deltaTime;
        }
    }

    void OnTriggerEnter(Collider collider)
    {
        if (collider.gameObject.CompareTag("Player"))
        {
            ConversationManager.Instance.StartConversation(myConversation);
        }
    }

    void OnTriggerExit(Collider collider)
    {
        if (collider.gameObject.CompareTag("Player"))
        {
            ConversationManager.Instance.EndConversation();
        }
    
       // * Starts conversation for two NPCs

        if(collider.gameObject.CompareTag(NPC1Tag))
        {
            ConversationManager.Instance.StartConversation(NPC1Conversation);
        }

        if(collider.gameObject.CompareTag(NPC2Tag))
        {
            ConversationManager.Instance.StartConversation(NPC2Conversation);
        }

        // * Ends conversation for two NPCs

        if (collider.gameObject.CompareTag(NPC1Tag) || collider.gameObject.CompareTag(NPC2Tag))
        {
            ConversationManager.Instance.EndConversation();
        }
    }
}
