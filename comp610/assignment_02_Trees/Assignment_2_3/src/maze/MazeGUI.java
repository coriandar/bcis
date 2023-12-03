package maze;

public class MazeGUI {
	public static void main(String[] args) {
		MazeGUI mvc = new MazeGUI();
	}

	public MazeGUI() {
		MVCView view = new MVCView();
		MazeSolver model = new MazeSolver();
		MVCController controller = new MVCController(view, model);
		view.addController(controller);
	}
}
