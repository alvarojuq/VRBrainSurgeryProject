using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZeroTransform : MonoBehaviour
{
    private float nextUpdate = 1;
 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    void Update(){
     
         // If the next update is reached
         if(Time.time>=nextUpdate){
             Debug.Log(Time.time+">="+nextUpdate);
             // Change the next update (current second+1)
             nextUpdate=Mathf.FloorToInt(Time.time)+1;
             // Call your fonction
             UpdateEverySecond();
         }
     
     }
     
     // Update is called once per second
     void UpdateEverySecond(){
     
         transform.localPosition = Vector3.zero;
     }

    // Update is called once per frame
    
}
