package maze;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MVCController implements ActionListener {

	public MVCView view;
	public MazeSolver model;

	public MVCController(MVCView view, MazeSolver model) {
		this.view = view;
		this.model = model;
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == view.loadButton) {
			model.loadContents();
			view.updateStatus(model.getFileName());
			if (!model.getNodeList().isEmpty()) {
				view.loadFile(model.getNumCols(), model.getNumRows(), model.getNodeList(), model.getPathList());
			}
		}
		else if (e.getSource() == view.solveButton) {
			if (model.getNodeList().isEmpty()) view.updateStatus("No file...");
			else if (model.getPathList().isEmpty()) view.updateStatus("Unsolvable");
			else view.solve(model.getNumCols(), model.getNumRows(), model.getNodeList(), model.getPathList());
		}
	}
}
