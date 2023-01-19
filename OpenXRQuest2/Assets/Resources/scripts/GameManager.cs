using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class GameManager : MonoBehaviour
{

    private bool isStart = false;
    private int points = 0;
    private float startTime;
    public float endTime = 60f;
    public int winningPoints;
    public Text timerText; 
    public Text pointsText;
    public TextMeshProUGUI conversation;
    private bool isFinished = false;
    public GameObject botonSalir;
    public AudioSource audio;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
       
        
        if(isStart){
            float timePassed = Time.time - startTime;
            float t = endTime - timePassed;
            string minutes = ((int) t / 60).ToString();
            string seconds = (t % 60).ToString("f2");
            timerText.text = minutes + ":" + seconds;
            pointsText.text = points.ToString() + "/" + winningPoints.ToString();

            if(t <= 0){
                isStart = false;
                Restart();
            }
        }
        if(points >= winningPoints){
            isStart = false;
            Finish();
        }
        
    }

    public void AddPoints(int value){
        points += value;
    }

    public void StartGame(){
        isStart = true;
        startTime = Time.time;
        audio.Play();
    }

    public void Finish(){
        audio.Play();
        isFinished = true;
        timerText.color = Color.yellow;
        conversation.text = "Veo que controlas el revolver. Bueno, he de admitir que estoy impresionado. No te preocupes que no diré nada a nadie. Ya puedes largarte";
        botonSalir.SetActive(true);
    }

    public void Restart(){
        points = 0;
        isFinished = false;
        timerText.text = "Deja el arma y vuelve a cogerla para empezar";
        pointsText.text = "Puntos restantes";
         conversation.text = "Vaya, veo que no eres tan bueno como dice la gente. Ya sabes cual es el trato. Si no me ganas pondré a todo el mundo en tu contra. Venga, vuelve a intentarlo.";
        audio.Play();
    }

    public void Leave(){
        SceneManager.LoadScene("mainScene");
    }
}
