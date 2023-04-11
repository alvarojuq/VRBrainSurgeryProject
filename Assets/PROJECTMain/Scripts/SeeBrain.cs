using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SeeBrain : MonoBehaviour
{


    public Material wallMaterial;

    public void Change2Transparent()
    {
        wallMaterial.SetFloat("_Cull", 2);

    }

    public void Change2Opaque()
    {
        wallMaterial.SetFloat("_Cull", 1);
    
    }

}
