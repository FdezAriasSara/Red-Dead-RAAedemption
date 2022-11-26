using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class IniciarJuegoToro : MonoBehaviour
{
    bool juegoHaEmpezado = false;
    Vector3 target;
    float step;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (juegoHaEmpezado) {

            // Hacer que se muevan los dos (de momento hacia delante hasta un objetivo)
            transform.position = Vector3.MoveTowards(transform.position, target, step);
            Vector3 posPlayer = new Vector3(transform.position.x - 0.9170011f, transform.position.y + 1.7f, transform.position.z - 46f);
            GameObject.FindWithTag("Player").transform.position = Vector3.MoveTowards(posPlayer, target, step);

            // comprobar si llega al final, si es el caso acaba la misión, si se la pega con un obstáculo vuelta al principio (hacer sistema de vidas?)

            //// Check if the position of the cube and sphere are approximately equal.
            //if (Vector3.Distance(transform.position, target.position) < 0.001f)
            //{
            //    // Swap the position of the cylinder.
            //    target.position *= -1.0f;
            //}
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!juegoHaEmpezado)
        {
            Debug.Log("ColisionTorooo");
            //if (other.gameObject.CompareTag("Player"))
            //{
            Debug.Log("Encontre jugador");
            // Subir jugador al toro
            //}



            // Teletransportar jugador y toro
            transform.position = new Vector3(24.91f, 1.19f, -358.1f);
            transform.rotation = Quaternion.Euler(0, 180, 0);

            //other.transform.position = new Vector3(23.85f, 1.19f, -351.05f); // Esto mueve las manos, pero no la camara

            // MOVER JUGADOR ENCIMA DEL TORO
            GameObject.FindWithTag("Player").transform.position = new Vector3(23.85f, 1.19f, -351.05f); // 19.8f, 5f, -402.01f
            //GameObject.FindWithTag("MainCamera").transform.position = new Vector3(transform.position.x, transform.position.y+2, transform.position.z); //new Vector3(0, 0, 0);

            target = GameObject.FindWithTag("Goal").transform.position;
            step = 0.03f;

            juegoHaEmpezado = true;

            // El jugador ya no puede moverse




            // Iniciar script para poder saltar
        }

    }
}
