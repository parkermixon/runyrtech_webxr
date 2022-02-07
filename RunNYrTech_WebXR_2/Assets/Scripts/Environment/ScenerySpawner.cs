using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//this one uses time to delete objects, whereas the target spawner uses collisions with an invisible wall (probably best to change both to timed)
public class ScenerySpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject[] trees = {};

    [SerializeField]
    private GameObject[] groundCover = {};

    [SerializeField]
    private float baseSpawnRate = 2.0f; //how many times per second objects try to spawn at a scroll speed of 1 m/frame

    [SerializeField]
    private float treeProb = 0.1f; //number between 0.0 and 1.0
    [SerializeField]
    private float treeSpread = 0.02f;

    [SerializeField]
    private float groundCoverProb = 0.2f; //number between 0.0 and 1.0
    [SerializeField]
    private int groundCoverIterations = 4;
    [SerializeField]
    private float groundCoverSpread = 0.02f;


    [SerializeField]
    private float scrollSpeed = 0.01f;
    [SerializeField]
    private float objTravelDistance = 10.0f;

    private float rotSpread = 90; //in degrees

    [SerializeField]
    private GameObject Left, Right;

    private List<GameObject> currentObjs = new List<GameObject>(); 

    public float ScrollSpeed { //returns scroll speed in m/s
        get {
            return scrollSpeed/Time.fixedDeltaTime; //get in m/s
        }
    }
    IEnumerator Start() {
        while (true) {
            SpawnSide(Left.transform.position);
            SpawnSide(Right.transform.position);

            float spawnRate = (scrollSpeed/Time.fixedDeltaTime) * baseSpawnRate;
            yield return new WaitForSeconds(1/spawnRate);
        }
    }

    void FixedUpdate(){
        foreach (GameObject currentObj in currentObjs) {
            currentObj.transform.position += this.transform.forward * scrollSpeed;
        }
        if(Input.GetKey(KeyCode.I)) {
            scrollSpeed += 0.01f;
        }

        if (Input.GetKey(KeyCode.O)) {
            scrollSpeed += 0.01f;
        }
    }

    private void SpawnSide(Vector3 origin) {
        for (int i = 0; i<groundCoverIterations; i++) {
            if(Random.Range(0.0f, 1.0f) <= groundCoverProb){
                StartCoroutine(SpawnObject(groundCover[Random.Range(0, groundCover.Length)], origin, Quaternion.identity, groundCoverSpread, rotSpread));
            }
        }

        if(Random.Range(0.0f, 1.0f) <= treeProb){
            StartCoroutine(SpawnObject(trees[Random.Range(0, trees.Length)], origin, Quaternion.identity, treeSpread, rotSpread));
        }
    }

    private IEnumerator SpawnObject(GameObject gameObject, Vector3 pos, Quaternion rot, float posSpread, float rotSpread) {
        Vector3 posOffset = new Vector3(Random.Range(-posSpread, posSpread+1), 0, Random.Range(-posSpread, posSpread+1));
        Quaternion rotOffset = Quaternion.AngleAxis(Random.Range(-rotSpread, rotSpread), Vector3.up);
        
        GameObject newObj = GameObject.Instantiate(gameObject, pos+posOffset, rot*rotOffset);
        currentObjs.Add(newObj);
        float objLifeSpan = (Time.fixedDeltaTime/scrollSpeed) * objTravelDistance;
        yield return new WaitForSeconds(objLifeSpan);
        currentObjs.Remove(newObj);
        GameObject.Destroy(newObj);
    }
}
