using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/******************************************
*                                         *
* Sara Fernández Arias - RAA - 2022-2023  *
*                                         *
*******************************************/
public class FuneralMagicTrigger : MonoBehaviour
{
      /**
    *Cuando el jugador entre en el circulo que indica la posición que debe ocupar en el ritual, se mostrarán los diversos efectos simulando "magia".
    */
    void OnTriggerEnter(Collider collider)   {


        string tagStr = collider.gameObject.tag;

        if (tagStr.Equals("Player"))
        {
            displayElements(true);
        }

    }
    private void displayElements(bool display)
    {
        GameObject[] magicfx= GameObject.FindGameObjectsWithTag("FXHechizo");
        foreach (var item in  magicfx)
        {
           item.SetActive(display);
        }
        GameObject playerPosition = GameObject.FindGameObjectsWithTag("PlayerPosition")[0];
        playerPosition.SetActive(!display);
    }
}
