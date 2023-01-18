using System.Diagnostics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeAmbienceMusic : MonoBehaviour
{

    void OnTriggerEnter(Collider collider)
    {
        string tagStr = collider.gameObject.tag;
       
        if (tagStr.Equals("Player"))
        {
            GameObject wesAmb = GameObject.FindGameObjectsWithTag("ambienceWes")[0];
            wesAmb.GetComponent<AudioSource>().mute = true;
            wesAmb.SetActive(false);
            GameObject[] arboles = GameObject.FindGameObjectsWithTag("cerrarCamino");
            foreach (var arbol in arboles)
            {
                //Inicialmente los arboles que impiden dar la vuelta se encuentran bajo tierra. y=1115.903
                arbol.transform.Translate(0,0.2203373f,0);
            }
            GameObject magicAmb = GameObject.FindGameObjectsWithTag("ambienceMagic")[0];
            magicAmb.GetComponent<AudioSource>().mute = false;
            magicAmb.SetActive(true);
            
        }
    }
}
