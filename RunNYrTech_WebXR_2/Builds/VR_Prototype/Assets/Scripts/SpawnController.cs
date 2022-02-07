using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnController : MonoBehaviour
{

    [SerializeField]
    private GameObject[] prefabArray;

    private List<GameObject[]> sphereStorageList = new List<GameObject[]>();

    [SerializeField]
    private int maxObjSpawn;

    [SerializeField]
    private GameObject m_spawnCenter;
    public GameObject spawnCenter { get { return m_spawnCenter; } }

    [SerializeField]
    private GameObject overlapBoxSpawnRegion;

    [SerializeField]
    private LayerMask spawnLayer;

    private GameObject m_pastSpawnPoint;

    private GameObject[] spawnPositions;

    private void Awake()
    {

        for (int i = 0; i < prefabArray.Length; i++)
        {

            CreatePrefabArray(i);
        }

        List<GameObject> tempList = new List<GameObject>();

        for (int i = 0; i < m_spawnCenter.transform.childCount; i++)
        {
            tempList.Add(m_spawnCenter.transform.GetChild(i).gameObject);
        }

        spawnPositions = tempList.ToArray();
    }

    public void Start()
    {
        m_pastSpawnPoint = spawnPositions[Random.Range(0, spawnPositions.Length)];
    }

    public void SpawnPrefab(int prefabID, int pointMulti, float speedMulti)
    {
        GameObject tempSphere = GetPrefab(sphereStorageList[prefabID]);

        BoxController tempBoxCon = GetPrefab(sphereStorageList[prefabID]).GetComponent<BoxController>();

        if (tempBoxCon != null & tempSphere != null)
        {
            tempBoxCon.pointValue *= pointMulti;
            tempBoxCon.speed *= speedMulti;

            overlapBoxSpawnRegion.transform.position = m_pastSpawnPoint.transform.position;

            var tempSpawnPointList = Physics.OverlapBox(overlapBoxSpawnRegion.transform.position, transform.localScale / 2, overlapBoxSpawnRegion.transform.rotation, spawnLayer);

            int num = Random.Range(0, tempSpawnPointList.Length);

            GameObject tempSpawnPoint = tempSpawnPointList[num].gameObject;

            tempBoxCon.transform.position = tempSpawnPoint.transform.position;

            m_pastSpawnPoint = tempSpawnPoint;

            tempSphere.SetActive(true);

        }


    }

    //Get a inactive box from the array:
    private GameObject GetPrefab(GameObject[] array)
    {
        for (int i = 0; i < array.Length; i++)
        {
            GameObject tempBox = array[i];

            if (!tempBox.activeInHierarchy)
            {
                return tempBox;
            }

        }

        Debug.LogError("Need to Spawn More Boxes");
        return null;

    }

    //Spawn boxes at the beginning:
    private void CreatePrefabArray(int prefabID)
    {
        List<GameObject> tempBoxList = new List<GameObject>();

        for (int i = 0; i < maxObjSpawn; i++)
        {
            GameObject tempBox = Instantiate(prefabArray[prefabID], new Vector3(0f, -5f, 0f), Quaternion.identity);

            tempBox.SetActive(false);

            tempBoxList.Add(tempBox);
        }

        sphereStorageList.Add(tempBoxList.ToArray());

        tempBoxList.Clear();
    }

    public void ResetSpheres()
    {
        for (int i = 0; i < sphereStorageList.Count; i++)
        {
            foreach (GameObject sphere in sphereStorageList[i])
            {
                sphere.SetActive(false);
            }
        }
    }


}
