using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRGun : MonoBehaviour
{
    public float speed = 40;
    public GameObject bullet;
    public Transform barrel;
    public AudioSource audioSource;
    public AudioClip audioClip;

    public float range = 500f;
    public float impactForce = 30f;

    public ParticleSystem particle;

    private float waitTime = 1.0f;
    private float timer = 1.0f;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
    }

    public void Fire()
    {
        if (timer > waitTime)
        {
            timer = 0;
            particle.Play();
            GameObject spawnedBullet = Instantiate(bullet, barrel.position, barrel.rotation);
            spawnedBullet.GetComponent<Rigidbody>().velocity = speed * barrel.forward;
            Debug.Log(spawnedBullet.GetComponent<Rigidbody>().velocity);
            audioSource.PlayOneShot(audioClip);
            Destroy(spawnedBullet, 2);

            RaycastHit hit;
            if (Physics.Raycast(barrel.transform.position, barrel.transform.forward, out hit, range))
            {
                Debug.Log(hit.transform.name);
                if (hit.collider.gameObject.TryGetComponent<Rigidbody>(out Rigidbody rigidbody))
                {
                    rigidbody.AddExplosionForce(1000f, rigidbody.transform.position, 5f);
                }
                if (hit.collider.gameObject.TryGetComponent<Target>(out Target target))
                {
                    target.Damage();
                }
            }
        }
    }
}
