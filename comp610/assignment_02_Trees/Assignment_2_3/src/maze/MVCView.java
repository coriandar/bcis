package maze;

import java.awt.BorderLayout;
import java.util.List;
import javax.swing.*;

public class MVCView extends JFrame {

	public JPanel nPanel = new JPanel();
	public JPanel sPanel = new JPanel();
	public JPanel sPanel2 = new JPanel();
	public Panel cPanel;
	JLabel currentFile = new JLabel("Load a file...");
	JButton loadButton = new JButton("Load");
	JButton solveButton = new JButton("Solve");

	public MVCView() {
		this.setName("Maze");
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setLayout(new BorderLayout());
		this.nPanel.add(loadButton);
		this.nPanel.add(solveButton);
		this.sPanel.add(currentFile);
		this.add(nPanel, BorderLayout.NORTH);
		this.add(sPanel, BorderLayout.SOUTH);
		this.setSize(1000, 900);
		this.setLocation(500,300);
		this.setVisible(true);
	}

	public void addController(MVCController controller) {
		loadButton.addActionListener(controller);
		solveButton.addActionListener(controller);
	}

	public void loadFile(int cols, int rows, List<Node> ballNodes, List<Node> pathList) {
		if (this.cPanel != null) this.remove(cPanel);
		boolean showSolve = false; // set show solve to false
		this.cPanel = new Panel(cols, rows, ballNodes, pathList, showSolve);
		this.add(cPanel, BorderLayout.CENTER);
		this.revalidate();
		this.repaint();
	}

	public void solve(int cols, int rows, List<Node> ballNodes, List<Node> pathList) {
		if (this.cPanel != null) this.remove(cPanel);
		boolean showSolve = true; // set show solve to true
		this.cPanel = new Panel(cols, rows, ballNodes, pathList, showSolve);
		this.add(cPanel, BorderLayout.CENTER);
		this.revalidate();
		this.repaint();
	}

	public void updateStatus(String status) {
		this.sPanel.removeAll();
		this.sPanel.add(new JLabel(status));
		this.revalidate();
		this.repaint();
	}
}
