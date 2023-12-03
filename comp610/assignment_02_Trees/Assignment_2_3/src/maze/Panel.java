package maze;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.util.List;
import javax.swing.JPanel;

public class Panel extends JPanel {

	private final int rows;
	private final int cols;
	private final List<Node> nodeList; // list of nodes
	private final List<Node> pathList; // holds solution path
	private final boolean showSolve; // flag to show solution

	public Panel(int cols, int rows, List<Node> nodeList, List<Node> pathList, boolean showSolve) {
		this.rows = rows + 1; // for offset from window
		this.cols = cols + 1; // for offset from window
		this.nodeList = nodeList;
		this.pathList = pathList;
		this.showSolve = showSolve;
	}

	@Override
	public void paint(Graphics g) {
		this.paintComponent(g);
		int w = this.getWidth();
		int h = this.getHeight();
		int colW = w / this.cols;
		int rowH = h / this.rows;
		int nodeSize = 20;

		renderGrid(g, rowH, w, colW, h); // renders grid
		renderPathConnection(g, colW, rowH); // renders node connections
		if (showSolve) renderPathSolution(g, colW, rowH); // renders solution
		renderNode(g, colW, rowH, nodeSize); // renders nodes

		revalidate();
		repaint();
	}

	/**
	 * Render connecting path of pathList (solution).
	 * 
	 * @param g, graphics
	 * @param colW, column width
	 * @param rowH, row height
	 */
	private void renderPathSolution(Graphics g, int colW, int rowH) {
		g.setColor(Color.GREEN);
		for (int i = 0; i < this.pathList.size() - 1; i++) {
			int x1 = (pathList.get(i).posX + 1) * colW;
			int y1 = (pathList.get(i).posY + 1) * rowH;
			int x2 = (pathList.get(i + 1).posX + 1) * colW;
			int y2 = (pathList.get(i + 1).posY + 1) * rowH;

			Graphics2D g2d = (Graphics2D) g;
			g2d.setStroke(new BasicStroke(5)); // set line thickness
			g2d.drawLine(x1,y1, x2, y2); // renders line between points
		}
	}

	/**
	 * Render connecting path of nodes and their child nodes.
	 * 
	 * @param g, graphics
	 * @param colW, column width
	 * @param rowH, row height
	 */
	private void renderPathConnection(Graphics g, int colW, int rowH) {
		g.setColor(Color.ORANGE);
		for (Node n : this.nodeList) {
			int x1 = (n.posX + 1) * colW;
			int y1 = (n.posY + 1) * rowH;

			for (Node child : (List<Node>) n.children) {
				int x2 = (child.posX + 1) * colW;
				int y2 = (child.posY + 1) * rowH;

				Graphics2D g2d = (Graphics2D) g;
				g2d.setStroke(new BasicStroke(5));
				g2d.drawLine(x1,y1, x2, y2);
			}
		}
	}

	/**
	 * Renders the nodes along grid. Changing colour based
	 * on type of node. Renders labels offset from node.
	 * 
	 * @param g, graphics
	 * @param colW, column width
	 * @param rowH, row height
	 * @param nodeSize, size of node to render
	 */
	private void renderNode(Graphics g, int colW, int rowH, int nodeSize) {
		for (Node b : this.nodeList) {
			int x = (b.posX + 1) * colW - nodeSize/2; // centers node on cross point
			int y = (b.posY + 1) * rowH - nodeSize/2;

			if (b.isStart) g.setColor(Color.MAGENTA);
			else if (b.isExit) g.setColor(Color.RED);
			else g.setColor(Color.BLUE);
			g.fillOval(x, y, nodeSize, nodeSize);
			renderLabel(g, b, x, y, nodeSize);
		}
	}

	/**
	 * Renders the label of the node offset from node itself.
	 * 
	 * @param g, graphics
	 * @param b, node to get label from
	 * @param x, position of node on grid
	 * @param y, position of node on grid
	 * @param fontSize, size of font
	 */
	private void renderLabel(Graphics g, Node b, int x, int y, int fontSize) {
		g.setFont(new Font("Arial", Font.PLAIN, fontSize + 5));
		g.setColor(Color.BLACK);
		String label;

		if (b.isStart) label = "Start"; // changes to start if flag is true
		else if (b.isExit) label = "Exit"; //  change to exit if flag is true
		else label = b.getLabel();

		g.drawString(label, x - 10, y - 10);
	}


	/**
	 * Renders a grid on page.
	 * 
	 * @param g, graphics
	 * @param rowH, rowHeight
	 * @param w, window width
	 * @param colW, column width
	 * @param h, window height
	 */
	private void renderGrid(Graphics g, int rowH, int w, int colW, int h) {
		g.setColor(Color.LIGHT_GRAY);
		for (int row = 0; row < rows; row++) { // hori lines
			int x = row * rowH;
			g.drawLine(0, x, w, x);
		}

		for (int col = 0; col < cols; col++) { // vert lines
			int y = col * colW;
			g.drawLine(y, 0, y, h);
		}
	}
}
