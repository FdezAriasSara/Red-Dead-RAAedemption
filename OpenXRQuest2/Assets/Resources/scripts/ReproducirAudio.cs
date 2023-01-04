using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem.XR;

public class ReproducirAudio : MonoBehaviour
{
    public AudioSource aReproducir;
    public bool yaReproducido = false;
    public Text texto;
    public string textoSubt;
    public TrackedPoseDriver movimiento;
        

    void reproducirAudio() {

        aReproducir.Play();
    }

    void OnTriggerEnter(Collider collider)
    {
        if (!yaReproducido)
        {
            aReproducir.Play();
            yaReproducido = true;
            movimiento.enabled = false;

            // desactivar collider del objeto? para no chocarse

            // bloquear movimiento del jugador mientras se reproduce audio?

               
            texto.text = textoSubt.Replace("\\n", "\n");
            StartCoroutine(waitAudio());
            
        }
    }

    private IEnumerator waitAudio()
    {
        yield return new WaitUntil(() => !aReproducir.isPlaying);
        texto.text = "";
        movimiento.enabled = true;
    }



}
