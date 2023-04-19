using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlanketColorChange : MonoBehaviour
{

    
    public GameObject NextButton;
    public GameObject object1;
    public GameObject object2;
    public Color collisionColor;
    public Color originalColor;
    private Renderer rend;


    public GameObject Slider;
    



    void Start()
    {
        rend = GetComponent<Renderer>();

        NextButton.SetActive(false);

        


    }

    void Update()
    {
        if (object1 && object2)
        {
            Collider object1Collider = object1.GetComponent<Collider>();
            Collider object2Collider = object2.GetComponent<Collider>();

            if (object1Collider.bounds.Intersects(object2Collider.bounds))
            {
                rend.material.color = collisionColor;

                NextButton.SetActive(true);


                

                MonoBehaviour[] scripts = Slider.GetComponents<MonoBehaviour>();

                // Loop through the array and disable each script
                foreach (MonoBehaviour script in scripts)
                {
                    script.enabled = false;
                }

            }
            else
            {
                rend.material.color = originalColor;
            }
        }

        


    }

    
}
