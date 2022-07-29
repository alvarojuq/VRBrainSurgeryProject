using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotToPoint : MonoBehaviour
{
    // Adjust the speed for the application.
    public float speed = 1.0f;

    // The target (cylinder) position.
    public GameObject InitialPos;
    public GameObject target;
    public GameObject target2;
    public GameObject target3;
    public GameObject target4;
    public GameObject target5;
    public GameObject target6;
    public GameObject target7;
    public GameObject target8;
    public GameObject target9;
    public GameObject target10;
    public GameObject target11;


    Vector3 Pos;

    void Start()
    {
        Pos = InitialPos.transform.position;
    }
    

    void Update()
    {
        // Move our position a step closer to the target.
        var step =  speed * Time.deltaTime; // calculate distance to move
        transform.position = Vector3.MoveTowards(transform.position, Pos, step);

        // Check if the position of the cube and sphere are approximately equal.
        
    }

    private void elec1()
    {
        Pos = target.transform.position;
    }
    private void elec2()
    {
        Pos = target2.transform.position;
    }
    private void elec3()
    {
        Pos = target3.transform.position;
    }
    private void elec4()
    {
        Pos = target4.transform.position;
    }
    private void elec5()
    {
        Pos = target5.transform.position;
    }
    private void elec6()
    {
        Pos = target6.transform.position;
    }
    private void elec7()
    {
        Pos = target7.transform.position;
    }
    private void elec8()
    {
        Pos = target8.transform.position;
    }
    private void elec9()
    {
        Pos = target9.transform.position;
    }
    private void elec10()
    {
        Pos = target10.transform.position;
    }
    private void elec11()
    {
        Pos = target11.transform.position;
    }



    public void electrode1()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec1", 3);
        
    }



    public void electrode2()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec2", 3);
    }

    public void electrode3()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec3", 3);
        
    }

    public void electrode4()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec4", 3);
        
    }


    public void electrode5()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec5", 3);
        
    }

    public void electrode6()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec6", 3);
        
    }

    public void electrode7()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec7", 3);
        
    }


    public void electrode8()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec8", 3);
        
    }

    public void electrode9()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec9", 3);
        
    }


    public void electrode10()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec10", 3);
        
    }

    public void electrode11()
    {
        Pos = InitialPos.transform.position;
        Invoke("elec11", 3);
        
    }
}
