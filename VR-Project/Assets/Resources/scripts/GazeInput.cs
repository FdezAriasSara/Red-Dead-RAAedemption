using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

///--------------------------------
///   Author: Victor Alvarez, Ph.D.
///   University of Oviedo, Spain
///--------------------------------

public class GazeInput : MonoBehaviour
{

    public string nextScene;

    //TIMER
    private bool isLooked = false;

    public float timerDuration = 3f;

    private float lookTimer = 0f;

    void Start()
    {
        // Disable screen dimming
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    void Update()
    {
        if (isLooked)
        {
            lookTimer += Time.deltaTime;

            if (lookTimer > timerDuration)
            {
                lookTimer = 0f;
                Debug.Log("Object timer click");
                OnPointerClick();
            }
        }
        else
        {
            lookTimer = 0f;
        }
    }

    public void setIsLooked(bool looked)
    {
        isLooked = looked;
    }

    public void OnPointerClick()
    {
         SceneManager.LoadScene(nextScene);
    }

}
