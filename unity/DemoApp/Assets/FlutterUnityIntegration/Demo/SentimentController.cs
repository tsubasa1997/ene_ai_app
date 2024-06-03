using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

using FlutterUnityIntegration;
using UnityEngine.EventSystems;
using System.Globalization;

public class SentimentController : MonoBehaviour
{
    public Animator animator;

    void Start()
    {
        animator.SetTrigger("EntryTrigger");
        Debug.Log("Start method called: EntryTrigger set");
    }

    public void Action(String sentiment)
    {
        Debug.Log("Action method called with sentiment: " + sentiment);

        try
        {
            bool isPositive = bool.Parse(sentiment);

            if (isPositive)
            {
                animator.SetTrigger("PositiveTrigger");
                Debug.Log("PositiveTrigger set");
            }
            else
            {
                animator.SetTrigger("NegativeTrigger");
                Debug.Log("NegativeTrigger set");
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Error parsing sentiment: " + e.Message);
        }
    }

     public void Motion(string actionMotion)
    {
        animator.SetTrigger(actionMotion);
    }

}



