using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//Sara Fernández Arias
public class Basura : MonoBehaviour
{
    public Text TrashMsg;
    public int left = 3;
    public int inside = 0;
    // Start is called before the first frame update
    void Start()
    {
        left = 3;
        inside = 0;
    }
    void OnCollisionStay()
    {
        this.UpdateResult(); 
        if (left > 0 && inside < 3)
        {
            left -= 1;
            inside += 1;

        }
        this.UpdateResult(); //lo llamo aqui para evitar que se muestre antes del minijuego

    }
    private void UpdateResult(){
        TrashMsg.text="Elementos por recoger: "+left+"\n"+" Recogidos : "+inside;

    }
    // Update is called once per frame
    void Update()
    {
      
    }
}
