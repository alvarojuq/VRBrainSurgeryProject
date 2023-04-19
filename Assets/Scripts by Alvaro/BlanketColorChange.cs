using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlanketColorChange : MonoBehaviour
{
    public GameObject object1;
    public GameObject object2;
    public Color collisionColor;
    private Color originalColor;
    private Renderer rend;

    void Start()
    {
        rend = GetComponent<Renderer>();
        originalColor = rend.material.color;
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
            }
            else
            {
                rend.material.color = originalColor;
            }
        }
    }
}
