using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class XPatientMovement : MonoBehaviour
{
    public float movementSpeed = 5f;


    // Start is called before the first frame update
    void Start()
    {
  

    }

    // Update is called once per frame
    void Update()
    {

            Vector3 currentPosition = transform.position;
            currentPosition.x += Input.GetAxis("Horizontal") * movementSpeed * Time.deltaTime;
            transform.position = currentPosition;

    }
}
