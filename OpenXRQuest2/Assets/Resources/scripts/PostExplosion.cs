using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.UI;

public class PostExplosion : MonoBehaviour
{

    public GameObject llaves;
    public Text texto;

    bool yaPuestoTexto = false;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        GameObject caballo = GameObject.FindWithTag("CaballoQueHuye");
        GameObject puntoCaballo = GameObject.FindWithTag("PuntoCaballo");
        GameObject granjero = GameObject.FindWithTag("Granjero");
        // Caballo sale corriendo (buscar animacion?)
        caballo.transform.position = Vector3.MoveTowards(caballo.transform.position, puntoCaballo.transform.position, 0.04f);

        // Pibe sale detrás del caballo (misma velocidad o un poco más lento)
        granjero.transform.position = Vector3.MoveTowards(granjero.transform.position, caballo.transform.position, 0.035f);
        granjero.transform.LookAt(caballo.transform.position);

        // Hacer llave grabable
        llaves.GetComponent<XRGrabInteractable>().enabled = true;

        // Cuando acabe audio explosion: granjero dice MI CABALLO!!! y protagonista boom después cuando acabe
        if (!yaPuestoTexto)
        {
            texto.text = "TÚ: BOOM! Jajaja \n GRANJERO: Noo! Se va mi caballo";
            yaPuestoTexto = true;
            esperarAudio();
        }

    }

    private void esperarAudio()
    {
        StartCoroutine(waitAudio());
    }

    private IEnumerator waitAudio()
    {
        yield return new WaitForSeconds(9);
        texto.text = "";
    }
}