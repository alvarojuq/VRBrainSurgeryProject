using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PatientSlider : MonoBehaviour
{
    
    public Slider mySlider;
    void Update()
    {
        
        
        
        transform.position = new Vector3(mySlider.value, transform.position.y, transform.position.z);

    }
    
}
