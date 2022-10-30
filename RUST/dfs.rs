use std::collections::HashMap;
use std::collections::HashSet;
use std::collections::vec_deque::VecDeque;
use std::ops::AddAssign;

type Vertex = u64;
type Graph = HashMap<Vertex, HashSet<Vertex>>;

/**
 * Constructs a graph from a sequence of parent child pairs
 */
pub fn from_pairs(pairs: &[(u64, u64)]) -> Graph {
    let mut graph: Graph = HashMap::new();
    for &(parent, child) in pairs {
        let children = graph.entry(parent).or_insert(HashSet::new());
        children.insert(child);
    }
    return graph;
}

#[derive(Debug)]
pub struct DFSResult {
    starting_times: HashMap<Vertex, u64>,
    finishing_times: HashMap<Vertex, u64>,
    parents: HashMap<Vertex, Option<Vertex>>,
    forest: VecDeque<HashSet<Vertex>>,
    topologically_sorted: VecDeque<Vertex>,
}

/**
 * Returns the starting and finishing times and the parents of every node
 * found with dfs as well as the dfs forest
 */
pub fn dfs(graph: &Graph) -> DFSResult {
    let mut state = DFSResult {
        // The DFS forest
        forest: VecDeque::new(),
        // all the starting times for each vertex
        starting_times: HashMap::new(),
        // the finishing times for each vertex
        finishing_times: HashMap::new(),
        // the parents of each vertex
        parents: HashMap::new(),
        // the topologically sorted list of verticies
        topologically_sorted: VecDeque::new(),
    };

    // the verticies that bave been seen so far
    let mut seen: HashSet<Vertex> = HashSet::new();
    // current time
    let mut time = 0;

    fn dfs_visit (graph: &Graph,
                  vertex: Vertex,
                  time: &mut u64,
                  seen: &mut HashSet<Vertex>,
                  state: &mut DFSResult) {