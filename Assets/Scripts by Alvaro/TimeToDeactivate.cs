using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeToDeactivate : MonoBehaviour
{
    public float timeToDeactivate = 10f;

    private void OnEnable()
    {
        StartCoroutine(DeactivateAfterDelay());
    }

    private IEnumerator DeactivateAfterDelay()
    {
        yield return new WaitForSeconds(timeToDeactivate);
        gameObject.SetActive(false);
    }
}
