using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayVideo : MonoBehaviour {

	public MovieTexture audioVisualizer;

	void Start () {
		GetComponent<RawImage> ().texture = audioVisualizer as MovieTexture;
		audioVisualizer.Play ();
	}
}
