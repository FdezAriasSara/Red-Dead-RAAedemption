using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DialogueEditor;
using System.Configuration.Assemblies;

public class TextDialogue : MonoBehaviour
{
    public NPCConversation myConversation;

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
    }
}
