﻿using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

/// <summary>
/// This is a special type of XRController that use some reflection to circumvent a current limitation of the
/// XRController that don't allow to trigger a select from another script (useful so that the MasterScript can trigger
/// a select on the front push of the thumbstick to teleport)
/// </summary>
public class XRReleaseController : XRController
{
    bool m_Selected;

    // FieldInfo m_SelectionStateFieldInfo;
    //
    // FieldInfo m_SelectionStateActivatedThisFrameInfo;
    // FieldInfo m_SelectionStateDectivatedThisFrameInfo;
    // FieldInfo m_SelectionStateActiveInfo;

    bool m_Active = false;

    protected override void OnEnable()
    {
        base.OnEnable();
        //
        // var interactionStateType = typeof(XRController).Assembly.GetType("UnityEngine.XR.Interaction.Toolkit.XRController+InteractionState");
        //
        // m_SelectionStateActivatedThisFrameInfo = interactionStateType.GetField("activatedThisFrame");
        // m_SelectionStateDectivatedThisFrameInfo = interactionStateType.GetField("deActivatedThisFrame");
        // m_SelectionStateActiveInfo = interactionStateType.GetField("active");
        //
        // m_SelectionStateFieldInfo = typeof(XRController).GetField("m_SelectInteractionState", BindingFlags.Instance | BindingFlags.NonPublic);
    }

    protected void LateUpdate()
    {
        XRControllerState state;
        GetControllerState(out state);
        
        var selectState = state.selectInteractionState;

        if(m_Selected)
        {
            if (!m_Active)
            {
                selectState.activatedThisFrame = true;
                selectState.active = true;
                m_Active = true;
            }
        }
        else
        {
            if (m_Active)
            {
                selectState.deactivatedThisFrame = true;
                selectState.active = false;
                m_Active = false;
            }
        }

        state.selectInteractionState = selectState;
        SetControllerState(state);
        
        m_Selected = false;
    }

    public void Select()
    {
        m_Selected = true;
    }
}
