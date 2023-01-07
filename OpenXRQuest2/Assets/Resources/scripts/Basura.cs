using System.Timers;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/******************************************
*                                         *
* Sara Fernández Arias - RAA - 2022-2023  *
*                                         *
*******************************************/
public class Basura : MonoBehaviour
{
    /**
    Este script implementa la funcionalidad del minijuego inicial de la escena , "Bienaventurados los pacificadores".
    En este, se muestra la información de los objetos que faltan por ser encestados en la papelera.
    Debido a la malla que forma el asset de el objeto que se emplea como papelera, los objetos no "entran". Por tanto, hago la ilusión de que así lo 
    hacen , destruyendo el objeto al ponerse en contacto con el collider.
    */
    public Text TrashMsg;
    public int left = 4;
    public int inside = 0;
    public string sceneName = "Blessed are the peacemakers";
    // Start is called before the first frame update
    void Start()
    {
        left = 4;
        inside = 0;
    }
    void OnTriggerEnter(Collider collider)
    {

        string trashObjPattern = "basura[0-9]+";
        string tagStr = collider.gameObject.tag;

        if (Regex.Match(tagStr, trashObjPattern, RegexOptions.IgnoreCase).Success)
        {

            UpdateResult();
            if (left > 0 && inside < 4)
            {
                left -= 1;
                inside += 1;
                Destroy(collider.gameObject);
            }
           UpdateResult(); //lo llamo aqui para evitar que se muestre antes del minijuego
            if (left == 0 && inside == 4)
            {//Si ganó el juego
                taskSuccess();
            }
            else if (left == 0 && inside != 4)
            {
                SceneManager.LoadScene(sceneName);
            }
        }

    }
    private void taskSuccess()
    {
       
        //se abre la puerta
        GameObject puerta = GameObject.FindGameObjectsWithTag("puertaRefugio")[0];
        puerta.transform.Rotate(0,90.0f,0);
        //se muestra el mensaje de victoria
        TrashMsg.text = "Misión superada. Busca pistas en el interior del edificio.";
        Timer textDisplayTimer=new Timer(5000);
        textDisplayTimer.Elapsed+=HideTextAfterTime;
        textDisplayTimer.Enabled=true;
        textDisplayTimer.Start();
        
    }
    /**
    Victory text is hidden after 5 seconds being displayed.
    
    */ 
    private void HideTextAfterTime(object sender,ElapsedEventArgs e){
        TrashMsg.text = "";

    }
    /**

    void OnCollisionEnter(Collision collision)
    {
        Debug.Log("DETECTA COLISION");
        string trashObjPattern="basura_[0-9]+";
        string tagStr=collision.gameObject.tag;
        Debug.Log("DETECTA TAG: "+tagStr);
        if(Regex.Match(tagStr,trashObjPattern,RegexOptions.IgnoreCase).Success){
         Debug.Log("matcheo TAG: "+tagStr);
         this.UpdateResult(); 
         if (left > 0 && inside < 3)
            {
            left -= 1;
            inside += 1;
            Destroy(collision.gameObject);
          }
         this.UpdateResult(); //lo llamo aqui para evitar que se muestre antes del minijuego

        }
       
    }
     */
    private void UpdateResult()
    {
        TrashMsg.text = "Elementos por recoger: " + left + "\n" + " Recogidos : " + inside;

    }
    // Update is called once per frame
    void Update()
    {

    }
}
