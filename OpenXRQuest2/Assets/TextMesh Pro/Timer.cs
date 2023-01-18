using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;



public class Timer : MonoBehaviour
{
    public float timer = 0;

    public TextMeshProUGUI textoTimer;

    // Update is called once per frame
    void Update()
    {

        timer -= Time.deltaTime;

        textoTimer.text = "" + timer.ToString("f1");

        if (timer <= 0.0)
        {
            Scene scene = SceneManager.GetActiveScene(); 
            SceneManager.LoadScene(scene.name);
        }
    }
}
