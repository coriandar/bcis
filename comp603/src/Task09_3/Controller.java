package Task09_3;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Controller implements ActionListener {
    public View view;
    public Model model;

    public Controller(Model model, View view) {
		this.model = model;
		this.view = view;
    }

	public void newQuestion() {
		model.newQuestion();
		view.questionView(model.num1, model.num2);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == view.loginButton) {
			System.out.println("You clicked the login button");
			model.username = view.unInput.getText(); // send  username to model from controller
			model.password = view.pwInput.getText(); // send  password to model from controller
			if (model.checkUser()) this.newQuestion();
		}
		else if (e.getSource() == view.nextButton) {
			System.out.println("You clicked the next button");
			model.userAnswer = view.calcSolution.getText();
			model.checkAnswer();
			this.newQuestion();
		}
		else if (e.getSource() == view.quitButton) {
			System.out.println("You clicked the quit button");
			model.quitGame();
			view.quitView(model.score);
		}
	}
}
