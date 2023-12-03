package noiseremoving;

/**
 * @question 2.2 NoiseRemoving
 */
public class NoiseRemovingGUI {

	public static void main(String[] args) {
		NoiseRemovingGUI mvc = new NoiseRemovingGUI();
	}

	public NoiseRemovingGUI() {
		MVCModel model = new MVCModel();
		MVCView view = new MVCView();
		MVCController controller = new MVCController(view, model);
		view.addController(controller);
	}
}
