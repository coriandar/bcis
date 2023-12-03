package mobileVirus;

import javax.swing.JFrame;

/**
 * @question 2.1 VirusSimulation
 */
public class MobilePhoneVirusSimulation {

	public static void main(String[] args) {
//		runPanel();
		runPanelLinked();
	}

	private static void runPanel() {
		JFrame frame = new JFrame("Mobile Phone Virus Simulation");
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Panel p = new Panel(1000, 1000); // holds boundary
		frame.getContentPane().add(p);
		frame.setSize(p.boundW, p.boundW);
		frame.setVisible(true);
	}

	private static void runPanelLinked() {
		JFrame frame = new JFrame("Mobile Phone Virus Simulation");
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		PanelLinked p = new PanelLinked(1000, 1000); // holds boundary
		frame.getContentPane().add(p);
		frame.setSize(p.boundW, p.boundW);
		frame.setVisible(true);
	}
}
