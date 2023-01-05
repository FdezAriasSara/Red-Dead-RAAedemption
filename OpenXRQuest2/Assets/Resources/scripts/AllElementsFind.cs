using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AllElementsFind : MonoBehaviour
{
    public string object1;
    public string object2;
    public string object3;
    public string nextScene;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (!GameObject.Find(object1) && !GameObject.Find(object2) && !GameObject.Find(object3))
        {
            SceneManager.LoadScene(nextScene);
        }

        
    }


}
