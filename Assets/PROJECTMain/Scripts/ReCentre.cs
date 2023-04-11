using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReCentre : MonoBehaviour
{
    

    public GameObject InitialLocation;
    public GameObject XROriginPos;


    private void OnTriggerEnter(Collider other)
    {
        
        if (other.tag == "Wall")
        {
            XROriginPos.transform.position = InitialLocation.transform.position;
        }
    }
}
