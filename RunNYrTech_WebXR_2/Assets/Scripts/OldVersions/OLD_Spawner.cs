using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OLD_Spawner : MonoBehaviour
{
    /* public enum SpawnMode {
        TorsoRandom, //spawns targets randomly around torso
        RegionsRandom, //spawns targets randomly around specified regions
        RegionsPointsArray //spawns targets at specified points in regions
    }

    private struct SpawnRegionData {
        private Vector3 centre;
        private float spawnRadius;
        private List<Vector3> spawnPoints;

        public Vector3 Centre { 
            get { return this.centre; }
        }
        public float SpawnRadius { 
            get { return this.spawnRadius; }
        }
        public List<Vector3> SpawnPoints { 
            get { return this.spawnPoints; }
        }

        internal SpawnRegionData(Vector3 centre, float spawnRadius, List<Vector3> spawnPoints) {
            this.centre = centre;
            this.spawnRadius = spawnRadius;
            this.spawnPoints = spawnPoints;
        }
    }

    //General Spawner Fields
    [Header("General Spawner Fields")]
    [Tooltip("How far the targets should stay in metres")]
    [SerializeField] private float targetLifeDistance = 10.0f; //might be better way to implement this; this feels kinda messy

    //Region Points Arrays - array of points for each region; relative to region centre
    [Header("Region Points Arrays")]
    [Tooltip("Points in head region (relative to centre of region)")]
    [SerializeField] private List<Vector3> headRegionPoints = new List<Vector3>{Vector3.zero};
    [Tooltip("Points in left hand region (relative to centre of region)")]
    [SerializeField] private List<Vector3> leftHandRegionPoints = new List<Vector3>{Vector3.zero};
    [Tooltip("Points in right hand region (relative to centre of region)")]
    [SerializeField] private List<Vector3> rightHandRegionPoints = new List<Vector3>{Vector3.zero};
    [Tooltip("Points in torso region (relative to centre of region)")]
    [SerializeField] private List<Vector3> torsoRegionPoints = new List<Vector3>{Vector3.zero};


    //Region Positions - centre position (local) of each region; calculated from headset position
    [Header("Region Positions")]
    [Tooltip("Centre Position of head region. Always set to zero vector (target spawner gameobject centres to head)")]
    [SerializeField] private Vector3 headPosition = Vector3.zero; //always at zero, because this gameobject is centred to the head
    [Tooltip("Centre position of left hand region relative to head")]
    [SerializeField] private Vector3 leftHandPosition = new Vector3(-0.5f, -0.1f, 0);
    [Tooltip("Centre position of right hand region relative to head")]
    [SerializeField] private Vector3 rightHandPosition = new Vector3(0.5f, -0.1f, 0);
    [Tooltip("Centre position of right hand region relative to head")]
    [SerializeField] private Vector3 torsoPosition = new Vector3(0, -0.2f, 0);

    //TorsoRandom Variables - variables for TorsoRandom SpawnMode
    [Header("TorsoRandom Spawn Mode Variables")]
    [Tooltip("Radius around the head where targets will spawn")]
    [SerializeField] private float torsoSpawnRadius; //radius around the head that the targets will approach
    
    //RegionRandom Variables - variable for RegionRandom SpawnMode
    [Header("RegionRandom Spawn Mode Variables")]
    [SerializeField] private float headRegionSpawnRadius;
    [SerializeField] private float leftHandRegionSpawnRadius;
    [SerializeField] private float rightHandRegionSpawnRadius;

    //Lookup Tables
    private Dictionary<Region, SpawnRegionData> spawnRegions;
    private Dictionary<SpawnMode, Func<Vector3>> pointGenerators;

    public Dictionary<SpawnMode, Func<Vector3>> PointGenerators {
        get {
            return pointGenerators; //again don't know if this enough to prevent modifications
        }
    }
    
    void Awake()
    {
        //Initialize SpawnRegions using Editor Set Values
        spawnRegions = new Dictionary<Region, SpawnRegionData>()
        {
            {Region.Head, new SpawnRegionData(headPosition, headRegionSpawnRadius, headRegionPoints)},
            {Region.Torso, new SpawnRegionData(torsoPosition, torsoSpawnRadius, torsoRegionPoints)},
            {Region.LeftHand, new SpawnRegionData(leftHandPosition, leftHandRegionSpawnRadius, leftHandRegionPoints)},
            {Region.RightHand, new SpawnRegionData(rightHandPosition, rightHandRegionSpawnRadius, rightHandRegionPoints)}
        };

        pointGenerators = new Dictionary<SpawnMode, Func<Vector3>>() {
            {SpawnMode.TorsoRandom, TorsoRandomSpawner},
            {SpawnMode.RegionsRandom, RegionsRandomSpawner},
            {SpawnMode.RegionsPointsArray, RegionsPointsArraySpawner}
        };
    }

    public void Spawn(Target targetRef, Vector3 localPosition, Quaternion rotation, float speed, Action<int> hitCallback, float numValue = 1.0f) {
        Target target = GameObject.Instantiate(targetRef, transform.position + localPosition, rotation);
        target.transform.parent = this.transform;
        target.Init(this.gameObject.transform.forward * speed, this.targetLifeDistance/speed, hitCallback); //targets move in local forward direction
        //wrap hitCallback in callback to record hit //lifespan is just placeholder
    }

    private Vector3 TorsoRandomSpawner(){
        return new Vector3(UnityEngine.Random.Range(-torsoSpawnRadius/2, torsoSpawnRadius/2), UnityEngine.Random.Range(-torsoSpawnRadius/2, torsoSpawnRadius/2), 0);
    }

    private Vector3 RegionsRandomSpawner(){
        //get a random region
        int valuesLength = Enum.GetValues(typeof(Region)).Length;
        Region spawnRegion = (Region) Enum.GetValues(typeof(Region)).GetValue(UnityEngine.Random.Range(0, valuesLength-1)); 
        SpawnRegionData regionData = spawnRegions[spawnRegion];

        float spawnRadius = regionData.SpawnRadius;

        Vector3 spawnPoint = regionData.Centre + new Vector3(UnityEngine.Random.Range(-spawnRadius, spawnRadius), UnityEngine.Random.Range(-spawnRadius, spawnRadius), 0); //z is forward, so don't touch that
   
        return spawnPoint;
    }

    private Vector3 RegionsPointsArraySpawner(){
        //get a random region
        int valuesLength = Enum.GetValues(typeof(Region)).Length;
        Region spawnRegion = (Region) Enum.GetValues(typeof(Region)).GetValue(UnityEngine.Random.Range(0, valuesLength));
        SpawnRegionData regionData = spawnRegions[spawnRegion];

        Vector3 spawnPoint = regionData.Centre + regionData.SpawnPoints[UnityEngine.Random.Range(0, regionData.SpawnPoints.Count)];

        return spawnPoint;
    }


   //Debug Settings -- CHANGE TO EDITOR TOOL WITH GIZMO
    [SerializeField] private GameObject radiusVisualizer; //TEMP, only for testing, remove in final
    [SerializeField] private GameObject pointVisualizer;
    [SerializeField] private bool visualizeRegions = false;

    //Visualizers
    private Dictionary<Region, GameObject> regionVisualizers = new Dictionary<Region, GameObject>();
    private Dictionary<Vector3, GameObject> pointVisualizers = new Dictionary<Vector3, GameObject>();

     public void VisualizeRegions(Transform origin){
        foreach (Region region in spawnRegions.Keys) {

            SpawnRegionData regionData = spawnRegions[region];
            GameObject visualizer;

            if (!regionVisualizers.TryGetValue(region, out visualizer)) {
                visualizer = GameObject.Instantiate(radiusVisualizer, Vector3.zero, Quaternion.identity);
                visualizer.transform.parent = origin;
                regionVisualizers.Add(region, visualizer);
            }

            //use local transform because visualizer is parented to this gameobject
            visualizer.transform.localPosition = regionData.Centre; 
            visualizer.transform.localScale = new Vector3(regionData.SpawnRadius * 2.0f, 0.02f, regionData.SpawnRadius * 2.0f);
            visualizer.transform.localRotation = Quaternion.AngleAxis(90, Vector3.right);

            // if(spawnMode == SpawnMode.RegionsPointsArray) {
            //     foreach(Vector3 point in regionData.SpawnPoints){
            //         GameObject pointVis;

            //         if (!pointVisualizers.TryGetValue(regionData.Centre + point, out pointVis)) {
            //             pointVis = GameObject.Instantiate(pointVisualizer, Vector3.zero, Quaternion.identity);
            //             pointVis.transform.parent = origin;
            //             pointVisualizers.Add(regionData.Centre + point, pointVis);
            //         }

            //         pointVis.transform.localPosition = regionData.Centre + point;
            //         pointVis.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
            //     }
            // }
        }
    }

    public void CleanUpVisualizers() {
        foreach(GameObject regVis in regionVisualizers.Values) {
            GameObject.Destroy(regVis);
        }

        regionVisualizers.Clear();

        foreach(GameObject pointVis in pointVisualizers.Values) {
            GameObject.Destroy(pointVis);
        }

        pointVisualizers.Clear();
    } */
}
