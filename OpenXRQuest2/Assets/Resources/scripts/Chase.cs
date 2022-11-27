using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

///--------------------------------
///   Author: Victor Alvarez, Ph.D.
///   University of Oviedo, Spain
///   Modified by: Alex
///--------------------------------

public class Chase : MonoBehaviour
{
    public Transform enemy;
    public Transform player;

    public int moveSpeed;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        enemy.LookAt(player.position);
        enemy.GetComponent<Animator>().Play("Run");
        enemy.position += enemy.forward*moveSpeed*Time.deltaTime;
    }
}
