using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.InputSystem.XR;
using UnityEngine.InputSystem;

public class IniciarJuegoToro : MonoBehaviour
{
    bool juegoHaEmpezado = false;
    Vector3 target;
    float step;
    public AudioSource cancionFondoNormal;
    public AudioSource cancionFondoEscapada;
    public AudioSource yija;
    public TrackedPoseDriver movimiento;
    public float valorY = 1.7f;
    bool bajando = true;

    float yInicial;
    public float gravity = -9.81f;
    public float jumpHeight = 10f;
    
    public InputActionReference jumpActionReference;
    private bool isGrounded => transform.position.y < 2; //Physics.Raycast(new Vector2(transform.position.x, transform.position.y + 2.0f), Vector3.down, 2.0f);
    private Vector3 posPlayer;

    public Rigidbody body;

    float valorYNuevo;

    public CharacterController controller;



    // Start is called before the first frame update
    void Start()
    {

        yInicial = transform.position.y;

        jumpActionReference.action.performed += OnJump;
    }

    // Update is called once per frame
    void Update()
    {
        if (juegoHaEmpezado) {

            // Hacer que se muevan los dos (de momento hacia delante hasta un objetivo)
            transform.position = Vector3.MoveTowards(transform.position, target, step);

            if ((transform.position.y - yInicial) < 2f)
            {
                valorYNuevo = transform.position.y + getNuevoValorY() + 1;
            } else
            {
                valorYNuevo = transform.position.y + 2f;
            }
            posPlayer = new Vector3(transform.position.x, valorYNuevo, transform.position.z-0.8f);
            GameObject.FindWithTag("MainCamera").transform.position = Vector3.MoveTowards(posPlayer, target, step);

            // comprobar si llega al final, si es el caso acaba la misión, si se la pega con un obstáculo vuelta al principio (hacer sistema de vidas?)


         }
    }

    private float getNuevoValorY()
    {
        if (bajando)
        {
            valorY -= 0.008f;

            if (valorY < 0.5f)
            {
                bajando = false;
            }
        }
        else
        {
            valorY += 0.008f;

            if (valorY > 1.5f)
            {
                bajando = true;
            }
        }


        return valorY;
    }

    private void OnTriggerEnter(Collider other)
    {

        print(other.gameObject.tag);

        if (!juegoHaEmpezado || other.gameObject.tag == "Basura")
        {
            controller.enabled = false;
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


            // Cambiar música
            cancionFondoNormal.Stop();
            cancionFondoEscapada.Play();


            // Audio yeehaw
            yija.Play();

            // El jugador ya no puede moverse
            movimiento.enabled = false;

        }

    }

    private void OnJump(InputAction.CallbackContext obj)
    {

        if (juegoHaEmpezado)
        {
            // Funcionalidad salto
            if (isGrounded)
            {

                body.AddForce(Vector3.up*45000);
                posPlayer = new Vector3(transform.position.x, transform.position.y + 400f, transform.position.z);
                GameObject.FindWithTag("MainCamera").transform.position = Vector3.MoveTowards(posPlayer, target, 20f);

            }
        }
    }
}
