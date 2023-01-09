using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/******************************************
*                                         *
* Sara Fernández Arias - RAA - 2022-2023  *
*                                         *
*******************************************/
/**
   Este script hace que se muestre el fuego bajo los totems del altar , aasí como la posición que el jugador debe adquirir para que se muestren las animaciones del hechizo y se termine la misión.
   */
public class TriggerTotemFire : MonoBehaviour
{
    public GameObject fuegoTotems;
    /**
    *El fuego aparecerá al poner  la calavera en el altar. Aparecerá también , el marcador de la posición que el jugador debe ocupar.
    */
    void OnTriggerStay(Collider collider)
    {


        string tagStr = collider.gameObject.tag;

        if (tagStr.Equals("Ofrenda"))
        {
            displayElements(true);
        }

    }

    /**
    *El fuego desaparecerá al quitar la calavera del altar.
    */
    void OnTriggerExit(Collider collider)
    {
        displayElements(false);


    }

    private void displayElements(bool display)
    {
      
            fuegoTotems.SetActive(display);
        
    }
}
