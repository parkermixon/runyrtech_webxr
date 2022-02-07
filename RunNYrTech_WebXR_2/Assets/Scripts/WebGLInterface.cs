using System;
using System.Net;
using System.Net.Http;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WebGLInterface {

    private const string url = "http://192.168.1.243:8080/login_action";
    private const string un = "vr"; //will be changing server to not require login for games, rather jut submit as a game
    private const string pw = "vr";
    private static readonly HttpClient serverClient = new HttpClient();

    public async void ConnectHTTP() {
        FormUrlEncodedContent loginForm = new FormUrlEncodedContent(new KeyValuePair<string, string>[]{
            new KeyValuePair<string, string>("username", un),
            new KeyValuePair<string, string>("password", pw)
        });

        Debug.Log("1");

        HttpResponseMessage response = await serverClient.PostAsync(url, loginForm);
        string content = await response.Content.ReadAsStringAsync();
        if(response.StatusCode == HttpStatusCode.OK) {
            Debug.Log("logged in");
        } else {
            Debug.LogError("Failed to log in to server");
        }
    }

    
}
