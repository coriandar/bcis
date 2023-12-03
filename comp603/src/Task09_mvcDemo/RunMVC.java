package Task09_mvcDemo;

public class RunMVC {

	private int start_value = 10;

	public static void main(String[] args) {
		RunMVC mainRunMVC = new RunMVC();
	}

	public RunMVC() {
		Model myModel = new Model();
		View myView = new View();
		myModel.addObserver(myView);
		Controller myController = new Controller(myModel, myView);
		myView.addController(myController);
	}
}
