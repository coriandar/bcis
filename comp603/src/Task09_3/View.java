package Task09_3;

import java.util.Observable;
import java.util.Observer;
import javax.swing.*;

public class View extends JFrame implements Observer {
    private JPanel userPanel = new JPanel();
    private JPanel calcPanel = new JPanel();
    private JLabel uName = new JLabel("Username: ");
    private JLabel pWord = new JLabel("Password: ");
    private JLabel wrongName = new JLabel("Wrong username or password!");
    private JLabel firstNumber = new JLabel();
    private JLabel secondNumber = new JLabel();
    private JLabel additionLabel = new JLabel("+");


	// inputs, change to get for proper
    public JTextField unInput = new JTextField(10);
    public JTextField pwInput = new JTextField(10);
    public JTextField calcSolution = new JTextField(10);

	// Buttons, change to get for proper
    public JButton nextButton = new JButton("Next");
    public JButton quitButton = new JButton("Quit");
    public JButton loginButton = new JButton("Log in");

	public View() {
        // Adding elements to JFrame
		// setup JFrame
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(600, 200);
		this.setLocation(500, 500);
		this.setVisible(true);
		this.loginView();
	}

	public void loginView() {
        userPanel.add(uName);
        userPanel.add(unInput);
        userPanel.add(pWord);
        userPanel.add(pwInput);
        userPanel.add(loginButton);
        this.add(userPanel);
	}

	public void quitView(int score) {
		JPanel quitPanel = new JPanel();
		JLabel scoreLabel = new JLabel("Your score: " + score);
		quitPanel.add(scoreLabel);
		this.getContentPane().removeAll();
		this.add(quitPanel);
		this.revalidate();
		this.repaint();
	}

	public void questionView(int num1, int num2) {
        calcPanel.add(firstNumber);
        calcPanel.add(additionLabel);
        calcPanel.add(secondNumber);
        calcPanel.add(calcSolution);
        calcPanel.add(nextButton);

        // controller sets the nums in view
		// update this part?
        firstNumber.setText(num1 + "");
        secondNumber.setText(num2 + "=");
        calcSolution.setText("");
        calcPanel.repaint();

		
        calcPanel.add(quitButton);
        this.getContentPane().removeAll();
        calcPanel.setVisible(true);
        this.add(calcPanel);
        this.revalidate();
        this.repaint();
	}

	@Override
	public void update(Observable o, Object arg) { // stuff received from notify
        System.out.println("Observable: " + o + "arg: " + arg);
		System.out.println("Score:" + arg + "\n");
	}

	public void addController(Controller controller) {
		System.out.println("View      : adding controller");
		loginButton.addActionListener(controller);
		nextButton.addActionListener(controller);
		quitButton.addActionListener(controller);
	}
}
