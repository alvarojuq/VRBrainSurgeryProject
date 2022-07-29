using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CountDown : MonoBehaviour
{
    public float timeLeft;
    public TMP_Text CountDownUI;
    public GameObject CountDownUIDisable;
    public TMP_Text MainTitleUI;
    public GameObject Step1UI;
    public GameObject OutlineScript1;
    public GameObject Step1Next;
    public TMP_Text StepUIText;
    public GameObject OutlineScript2;
    int count = 0;
    // public GameObject OutlineScript3;
    
     
    void Start()
    {
        
    } 
    void Update()
    {
        if(count == 0)
        {

            timeLeft -= Time.deltaTime;
       
            CountDownUI.text = timeLeft.ToString("n0");
            if(timeLeft < 0)
            {
                
                DisableShowUI();
            }


        }
        
    }

    public void DisableShowUI()
    {
        
        CountDownUIDisable.SetActive(false);
        MainTitleUI.text = "Step 1";
        Step1UI.SetActive(true);
        Step1Next.SetActive(true);
        
        OutlineScript1.GetComponent<Outline>().enabled = true;
        
        
        

    }

    public void Step2()
    {
        count = 1;
        StepUIText.text = "Fix the patient head with Mayfield Support (Log: Ability to adjust the mayfiled holder can be given)";
        MainTitleUI.text = "Step 2";
        OutlineScript1.GetComponent<Outline>().enabled = !OutlineScript1.GetComponent<Outline>().enabled;
        OutlineScript2.GetComponent<Outline>().enabled = true;
        

    }

    public void Step3()
    {
       
        StepUIText.text = "Referencing between Robot & Patient, Planning of Electrode Entry Points & End Point is Done. (Log: Scanning process will take place with camera, camera is currently not installed in the room :())";
        MainTitleUI.text = "Step 3";
        
        OutlineScript1.GetComponent<Outline>().enabled = !OutlineScript1.GetComponent<Outline>().enabled;
        OutlineScript2.GetComponent<Outline>().enabled = !OutlineScript2.GetComponent<Outline>().enabled;
        // OutlineScript3.GetComponent<Outline>().enabled = true;
        

    }

    public void Step4()
    {
       
        StepUIText.text = "Directing the robot to electrode entry points according to previous planning (Log: Robot is not yet complete, as i have less information about the robot, tip of robot will have some instrument for helping in drilling process ) ";
        MainTitleUI.text = "Step 4";
        
        
        

    }

    public void Step5()
    {
       
        StepUIText.text = "Drilling on already established points (Log: Grab the drill from table, you can't drill on the head right now :)";
        MainTitleUI.text = "Step 5";
        
        
        

    }

    public void Step6()
    {
       
        StepUIText.text = "Placement of Electrode & Removal Takes place (Log: need to work on!)";
        MainTitleUI.text = "Step 6";
        
        
        

    }

    public void Step7()
    {
       
        StepUIText.text = "Thank you for trying..............";
        MainTitleUI.text = "More Steps can be added!!!!!!!";
        
        
        

    }
 
 
}
