using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtTarget : MonoBehaviour
{
    public Transform target;

    float lockPos = 0;

    void Update()
    {
        transform.rotation = Quaternion.Euler(lockPos, transform.rotation.eulerAngles.x, lockPos);
        // Rotate the camera every frame so it keeps looking at the target
        transform.LookAt(target);

       
    }
}