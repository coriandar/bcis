package dsa_w11;

public class PathFinder {
	
	int[][] adjacencyMatrix;
	String path;
	String queue;
	String visited;
	int[] lastNode;

	public PathFinder(int[][] matrix) {
		this.adjacencyMatrix = matrix;
		this.lastNode = new int[matrix.length];

		for (int i = 0; i < lastNode.length; i++) {
			lastNode[i] = -1;
		}
		this.queue = "";
		this.visited = "";
		this.path = "";
	}

	public static void main(String[] args) {
		// adjMatrix[departure][destination]
		// need correct this
		int[][] adjMatrix = { {0, 1, 0, 1, 0, 0, 0},
                                      {0, 0, 0, 1, 1, 0, 0},
                    		      {0, 0, 0, 0, 0, 1, 0},
                                      {0, 0, 1, 0, 1, 1, 1},
                                      {0, 0, 0, 0, 0, 0, 1},
				      {0, 0, 0, 0, 0, 0, 0},
				      {0, 0, 0, 0, 0, 1, 0}};

		PathFinder pf = new PathFinder(adjMatrix);
		String shortestPath = pf.findPath(0, 6);
		System.out.println(shortestPath);
	}

	private void enqueue(int node) {
		queue = queue + node;
	}

	private int dequeue() {
		int node = Integer.valueOf(queue.charAt(0) + "");
		queue = queue.substring(1);
		return node;
	}

	private boolean isQueueEmpty() {
		return queue.isEmpty();
	}

	// implement the findPath() method here
	// so the method returns a String of shortest path from the start to end
	public String findPath(int start, int end) {
		enqueue(start);
		visited = start + "";
		while(!isQueueEmpty()) {
			int current =  dequeue();
			for(int i = 0; i < this.adjacencyMatrix[current].length; i++) {
                            
				// whether the path table need to be updated
				if(adjacencyMatrix[current][i] != 0) {
					// whether the node i has been visited (enqueue i, add i to visited, update
					// i's path/last node
                                        
					if (!visited.contains(i+"")) {
						enqueue(i);
						visited += i; // add node to visited list
						lastNode[i] = current;
					}
				}
			}
		}

//		 use the path table to generate the path from start to end
//		String path = start + "";
		for (int node = end; node != -1; node = lastNode[node]) {
                        path = node + " " + path;
		}

		return path;
	}
}
