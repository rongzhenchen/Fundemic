using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{

    public void Game1Button(){
        SceneManager.LoadScene("VirusGame");
    }

    public void Game2Button(){
        SceneManager.LoadScene("QuizGame");
    }

    public void QuitButton(){
        Application.Quit();
        Debug.Log("Game closed.");
    }
}
