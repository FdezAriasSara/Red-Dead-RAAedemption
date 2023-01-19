using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;

public class VRGun : MonoBehaviour
{
    public float speed = 40;
    public Transform barrel;
    public AudioSource audioSource;
    public AudioClip audioClip;

    public float range = 500f;
    public float impactForce = 30f;

    public ParticleSystem particle;

    private float waitTime = 0.5f;
    private float timer = 1.0f;

    public Grabbable grabbable;

    public bool isGrabbed = false;
    private bool isRightGrabbing = false;
    private bool isLeftGrabbing = false;
    public GameObject impactEffect;
    public GameManager gameManager;

    public Material material;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        if (OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger, OVRInput.Controller.RTouch) && isGrabbed == true)
        {
            Fire();
        }
        if (OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger, OVRInput.Controller.RTouch) && isGrabbed == true)
        {
            Fire();
        }

    }

    public void Select()
    {
        isGrabbed = true;
        gameManager.StartGame();

    }

    public void Unselect(){
        isGrabbed = false;
    }

    public void Fire()
    {
        if (timer > waitTime)
        {
            timer = 0;
            //particle.Play();
            audioSource.PlayOneShot(audioClip);

            RaycastHit hit;
            if (Physics.Raycast(barrel.transform.position, barrel.transform.forward, out hit, range))
            {
                Debug.Log(hit.transform.name);
                Debug.DrawRay(barrel.transform.position, barrel.TransformDirection(Vector3.forward) * hit.distance, Color.red, 3);
                if (hit.collider.gameObject.TryGetComponent<Rigidbody>(out Rigidbody rigidbody))
                {
                    rigidbody.AddExplosionForce(1000f, rigidbody.transform.position, 5f);
                }
                if (hit.collider.gameObject.TryGetComponent<Target>(out Target target))
                {
                    target.Damage();
                }
                if (hit.collider.gameObject.TryGetComponent<Target2>(out Target2 target2))
                {
                    target2.Hit();
                }
                GameObject impact = Instantiate(impactEffect, hit.point, Quaternion.LookRotation(hit.normal));
                Destroy(impact, 2f);

                /* Ver Raycast en el juego
                LineRenderer lineRenderer = gameObject.AddComponent<LineRenderer>();
                //lineRenderer.material = material;
                lineRenderer.widthMultiplier = 0.005f;
                lineRenderer.positionCount = 2;
                Vector3[] Arraywithpositions = new Vector3[2];
                Arraywithpositions[0] = barrel.transform.position;
                Arraywithpositions[1] = hit.point;
                lineRenderer.SetPositions(Arraywithpositions);
                Destroy(lineRenderer, 1F);
                */
            }
        }
    }

}
