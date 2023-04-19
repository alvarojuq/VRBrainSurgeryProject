using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PatientMovementLimit : MonoBehaviour
{
    public float maxMovement = 0.2f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float currentMovement = transform.position.x;
        if (currentMovement >= maxMovement)
        {
            // Show green highlight
        }
    }
}
