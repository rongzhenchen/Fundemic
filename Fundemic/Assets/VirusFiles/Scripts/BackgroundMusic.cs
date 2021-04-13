using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundMusic : MonoBehaviour
{
    private static BackgroundMusic backgroundMusic = null;

    void Awake () {
      if (backgroundMusic != null)
         Destroy (gameObject);
      else {
         backgroundMusic = this;
         GameObject.DontDestroyOnLoad(gameObject);
      }
   }
}
