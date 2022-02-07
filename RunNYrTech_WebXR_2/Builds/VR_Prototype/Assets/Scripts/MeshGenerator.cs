using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeshGenerator : MonoBehaviour
{
    [SerializeField]
    private List<Vector3> m_vertices = new List<Vector3>();
    public List<Vector3> vertices { get { return m_vertices; } set { m_vertices = value; } }

    [SerializeField]
    private List<int> triangles = new List<int>();

    [SerializeField]
    private List<Vector3> newNormals = new List<Vector3>();

    [SerializeField]
    private GameObject pointPositionPrefab;

    [SerializeField]
    private List<GameObject> tempPointPositionPrefabs;

    [SerializeField]
    private List<Vector3> trianglePositions = new List<Vector3>();

    [SerializeField]
    private bool m_isMeshGenerated = false;
    public bool isMeshGenerated { get { return m_isMeshGenerated; } }

    private MeshFilter m_meshFilter;
    private Mesh newMesh;
    private MeshCollider m_meshColl;
    private LineRenderer m_lineRender;

    public void Awake()
    {
        m_meshFilter = GetComponent<MeshFilter>();
        m_lineRender = GetComponent<LineRenderer>();

        newMesh = new Mesh();

        m_meshFilter.mesh = newMesh;

    }

    public void GeneratePoint(Vector3 newPosition)
    {
        if (m_isMeshGenerated)
            return;

        Vector3 meshPoint = newPosition;

        /*
        if (m_vertices.Count >= 3)
        {

            Destroy(m_meshColl);

            m_lineRender.enabled = false;
            m_vertices.Clear();

            for (int i = 0; i < tempPointPositionPrefabs.Count; i++)
            {
                Destroy(tempPointPositionPrefabs[i]);
            }
            trianglePositions.Clear();
            tempPointPositionPrefabs.Clear();


        }

        */

        if (m_vertices.Count <= 0)
        {
            newMesh.Clear();

            transform.position = meshPoint;
            meshPoint = Vector3.zero;
        }
       else
        {

            meshPoint.z = transform.position.z;

            Vector3 pointPos = meshPoint - transform.position;

            meshPoint = pointPos;
        }

        m_vertices.Add(meshPoint);

        newPosition.z = transform.position.z;

        GameObject tempPointObj = Instantiate(pointPositionPrefab, newPosition, Quaternion.identity);
        tempPointPositionPrefabs.Add(tempPointObj);

        trianglePositions.Add(newPosition);

        if (m_vertices.Count >= 3)
        {
            m_isMeshGenerated = true;

            newMesh.Clear();

            m_lineRender.SetPosition(0, trianglePositions[0]);
            m_lineRender.SetPosition(1, trianglePositions[1]);
            m_lineRender.SetPosition(2, trianglePositions[2]);
           
            m_lineRender.enabled = true;

            Vector3 triangleCenter = new Vector3(
                (trianglePositions[0].x + trianglePositions[1].x + trianglePositions[2].x) / 3, 
                (trianglePositions[0].y + trianglePositions[1].y + trianglePositions[2].y) / 3, 
                (trianglePositions[0].z + trianglePositions[1].z + trianglePositions[2].z) / 3
                );

            GameObject triangleCenterPoint = Instantiate(pointPositionPrefab, triangleCenter, Quaternion.identity);
            tempPointPositionPrefabs.Add(triangleCenterPoint);

            newMesh.vertices = m_vertices.ToArray();
            newMesh.triangles = triangles.ToArray();
            newMesh.normals = newNormals.ToArray();

            newMesh.RecalculateNormals();

            gameObject.AddComponent<MeshCollider>();
            m_meshColl = gameObject.GetComponent<MeshCollider>();
            m_meshColl.convex = true;
            m_meshColl.isTrigger = true;

        }

    }


   public void ResetMesh()
    {
        m_isMeshGenerated = false;

        Destroy(m_meshColl);

        m_lineRender.enabled = false;
        m_vertices.Clear();

        for (int i = 0; i < tempPointPositionPrefabs.Count; i++)
        {
            Destroy(tempPointPositionPrefabs[i]);
        }
        trianglePositions.Clear();
        tempPointPositionPrefabs.Clear();

        newMesh.Clear();
    }
}
