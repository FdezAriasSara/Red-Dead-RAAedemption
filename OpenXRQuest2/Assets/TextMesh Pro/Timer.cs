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
    public string nextScene = "Menu"; 

    // Update is called once per frame
    void Update()
    {

        timer -= Time.deltaTime;

        textoTimer.text = "" + timer.ToString("f1");

        if (timer == 0)
        {
            SceneManager.LoadScene(nextScene);
        }
    }
}
