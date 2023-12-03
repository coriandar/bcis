package Task09_3;

public class QuizMVC {
	public static void main(String[] args) {
		QuizMVC run = new QuizMVC();
	}

	public QuizMVC() {
		Model model = new Model();
		View view = new View();
		model.addObserver(view); // only observing score atm
		Controller controller = new Controller(model, view);
		view.addController(controller); // for action listeners
	}
}
