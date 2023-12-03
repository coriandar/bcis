package maze;

import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import javax.swing.JFileChooser;

public class MazeSolver {

	private int numNodes;
	private int numCols;
	private int numRows;
	private List<Node> nodeList; 
	private List<Node> pathList; 
	private String fileName; 
	private int startIndex;
	private int exitIndex;

	public MazeSolver() {
		this.nodeList = new ArrayList<>();
		this.pathList = new ArrayList<>();
	}

	public int getNumNodes() { return this.numNodes; }
	public int getNumCols() { return this.numCols; }
	public int getNumRows() { return this.numRows; }
	public String getFileName() { return this.fileName; }
	public List<Node> getNodeList() { return this.nodeList; }
	public List<Node> getPathList() { return this.pathList; }

	/**
	 * Reads in the chosen maze text file. Passing checks it will
	 * get the nodeList, pathList and maze header data.
	 */
	public void loadContents() {
		JFileChooser file = new JFileChooser(new File("."));
		int stateFileChooser = file.showOpenDialog(null);

		if (stateFileChooser == JFileChooser.APPROVE_OPTION) {
			// get file type
			String type = file.getSelectedFile().getName();
			int indexType = type.indexOf(".");
			type = type.substring(indexType);

			if (type.equals(".txt")) {
				this.nodeList = new ArrayList<>(); // reset nodeList
				this.pathList = new ArrayList<>(); // reset pathList

				// get file name
				String name = file.getSelectedFile().getName();
				int indexName = name.indexOf(".");
				this.fileName = name.substring(0, indexName);

				// get file path
				String filePath = file.getSelectedFile().getPath();
				FileManager f = new FileManager(filePath);
				f.readFile(filePath);

				this.getHeader(f.lineData); // load header data
				this.addNode(f.lineData); // add nodes to nodeList
				this.addNodeChildren(f.lineData); // add children to nodes
				this.addNodeParent(); // add parents to nodes
				this.findPath(); // try find path

				// DEBUG
//				for (Node child : this.nodeList) System.out.println(child);
//				System.out.println("");
			}
			else this.fileName = "Not a text file";
		}
	}

	/**
	 * Tries to find path traversing up from parent first. If that results in
	 * empty pathList, then will use DFS method.
	 */
	private void findPath() {
		Node start = this.nodeList.get(startIndex);
		Node exit = this.nodeList.get(exitIndex);

		// if startIndex is larger than exit (reversed) then use DFS method.
		if (startIndex > exitIndex) findPathDFS(exit, start);

		else if(startIndex < exitIndex){
			findPathFromParent(start, exit); // else use from parent method, does not work with circular
			if (this.pathList.isEmpty()) findPathDFS(start, exit); // if circular, use DFS method
		}
	}

	/**
	 * DFS method that tracks each visited node and builds path
	 * from start to exit.
	 * 
	 * @param start, node to start search from
	 * @param exit, node to end search on
	 */
	private void findPathDFS(Node start, Node exit) {
		HashSet<Node> visited = new HashSet<>();
		List<Node> path = new ArrayList<>();
		path.add(start); // add start to path

		findPathDFS(start, exit, visited, path); // recursive function

		// checks that last node in path is exit
		if (path.get(path.size() - 1).compareTo(exit) == 0) {
			this.pathList = path;
			System.out.println("Solved with DFS");
		}
	}

	/**
	 * Recursive function that visits every child node from start node,
	 * adding each child to the path, if the target(exit) node is
	 * not found it will remove it from the path. Backtracking when it reaches
	 * a dead end is enabled through this method.
	 * 
	 * @param start, node to start search from
	 * @param exit, node to end search on
	 * @param visited, hashset of visited nodes
	 * @param path, tracked path from start to exit
	 */
	private void findPathDFS(Node start, Node exit, HashSet<Node> visited, List<Node> path) {
		if (start.compareTo(exit) == 0) return; // base case
		visited.add(start); // add start to visited hashset

		// iterate over each child of start node
		for (Node child : (List<Node>)start.children) {
			if (!visited.contains(child)) {
				path.add(child); // add child to path
				findPathDFS(child, exit, visited, path); // recursive call dfs on each child
				if (path.get(path.size() - 1).compareTo(exit) == 0) return; // exit node found
				else path.remove(path.size() - 1); // remove last node from path
			}
		}
	}

	/**
	 * Traverses backwards up each parent adding each node, while loop stops
	 * when it reaches the node with parent as null. A list of path from Exit
	 * to Start is stored in pathList. Not able to backtrack.
	 * 
	 * @param start, node to end search on
	 * @param exit, node to start search from
	 */
	private void findPathFromParent(Node start, Node exit) {
		Node current = exit;
		List<Node> path = new ArrayList<>();
		if (start != null && current != null) {
			while (current.compareTo(start) != 0) {
				path.add(current); // add current node to pathList
				current = current.parent; // set current to parent, traverse up
				if (current.isStart) path.add(current); // at end add the start node
				if  (current.parent == null) break;
			}
			// checks that last added path is start
			if (path.get(path.size() - 1).compareTo(start) == 0) {
				this.pathList = path;
				System.out.println("Solved with fromParent");
			}
		}
	}

	/**
	 * Reads in data from file and populates the header data
	 * 
	 * @param lineData, lines read in from text file.
	 */
	private void getHeader(String[] lineData) {
		String[] header = lineData[0].split(",");
		this.numNodes = Integer.parseInt(header[0]);
		this.numCols = Integer.parseInt(header[1]);
		this.numRows = Integer.parseInt(header[2]);
	}

	/**
	 * Takes and split each line read in, getting the nodes
	 * position data, start/exit node data, and nodes key data.
	 * 
	 * @param lineData, lines read in from text file.
	 */
	private void addNode(String[] lineData) {
		for (int i = 1; i < lineData.length; i++) {

			String[] node = lineData[i].split(",");
			int posX = Integer.parseInt(node[1]);
			int posY = Integer.parseInt(node[2]);

			boolean isStart = false;
			boolean isExit = false;

			// Changes START to A + index found at, then set isStart flag
			if (node[0].equals("START")) {
				node[0] = (char)('A' + i - 1) + "";
				isStart = true;
				this.startIndex = i - 1;
			}

			// Changes EXIT to A + index found at, then set isExit flag
			if (node[0].equals("EXIT")) {
				node[0] = (char)('A' + i - 1) + "";
				isExit = true;
				this.exitIndex = i - 1;
			}
			// add newNode to the nodeList
			this.nodeList.add(new Node(node[0], posX, posY, isStart, isExit));
		}
	}

	/**
	 * Creates a hashMap from nodeList using node.key and the node itself. Parses each line read in
	 * storing as child keys. Iterate through the nodeList, getting value from hashmap and adding
	 * to be child node if it is not "A" (null).
	 * 
	 * @param lineData, lines read in from text file.
	 */
	private void addNodeChildren(String[] lineData) {
		if (!nodeList.isEmpty()) {
			Map<String, Node> nodeMap = new HashMap<>();
			for (Node n : nodeList) nodeMap.put((String) n.key, n);

			for (int i = 1; i < lineData.length; i++) { // skips the header line
				String[] keys = lineData[i].split(","); // parse the key data from line
				if (!keys[3].equals("A")) nodeList.get(i - 1).addChild(nodeMap.get(keys[3]));
				if (!keys[4].equals("A")) nodeList.get(i - 1).addChild(nodeMap.get(keys[4]));
			}
		}
	}

	/**
	 * Iterate through each node in nodeList, setting each child nodes parent as current
	 * node.
	 */
	private void addNodeParent() {
		if (!nodeList.isEmpty()) {
			for(Node n: this.nodeList) { // each node in nodeList
				for (Node child : (List<Node>) n.children) child.addParent(n); // set parent
			}
		}
	}
}
