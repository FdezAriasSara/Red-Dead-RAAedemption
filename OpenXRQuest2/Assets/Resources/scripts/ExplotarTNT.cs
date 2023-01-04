using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class ExplotarTNT : MonoBehaviour
{

    public AudioSource explosion;
    public AudioSource caballo;
    public AudioSource boom;
    public AudioSource miCaballo;
    public AudioSource musicaFondo;
    public GameObject postExplosion;

    // Start is called before the first frame update
    void Start()
    {

        
    }

    // Update is called once per frame
    void Update()
    {
    }

    void OnCollisionEnter(Collision collision)
    {
        Debug.Log("Colision");
        musicaFondo.Stop();
        boom.Play();

        if (collision.gameObject.tag == "Lamp")
        {
            GameObject[] tnts = GameObject.FindGameObjectsWithTag("TNT");

            foreach (GameObject tnt in tnts)
            {
                tnt.SetActive(false);
            }

            collision.gameObject.SetActive(false);
            // falta señal de warning al lado, de que hay explosivos y que no se mezcle con fuego o algo asi

            // Sonido explosion
            explosion.Play();

            // Efecto explosion
            var efectos = Resources
            .FindObjectsOfTypeAll<GameObject>()
            .Where(g => g.CompareTag("Explosion"));


            //Debug.Log(efectos);
            //Debug.Log("Boom");
            foreach (var efecto in efectos)
            {
                efecto.SetActive(true);
            }

            // Flash blanco

            // Sonido caballo (animacion si encuentro?)
            caballo.Play();
            miCaballo.Play();

            postExplosion.SetActive(true);
            musicaFondo.Play();


        }
    }

}
