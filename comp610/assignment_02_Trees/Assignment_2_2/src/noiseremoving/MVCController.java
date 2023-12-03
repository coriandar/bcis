package noiseremoving;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/**
 * @question 2.2 NoiseRemoving
 */
public class MVCController implements ActionListener {

	public MVCView view;
	public MVCModel model;

    /**
     * Constructor, default.
     * 
     * @param view, for mvc
     * @param model, for mvc
     */
	public MVCController(MVCView view, MVCModel model) {
		this.view = view;
		this.model = model;
	}

    /**
     * Takes action event and finds the button pressed, to then
     * select which action to perform.
     * 
     * @param e, action event from view
     */
	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == view.loadImageButton) {
			model.loadImage();
			view.imageToProcess(model.filePath);
			System.out.println("Loaded image " + model.filePath);
		}
		else if (e.getSource() == view.denoiseButton) {
			model.denoise(model.filePath);
			view.imageToProcess(model.filePath);
			System.out.println("Denoised image.");
		}
		else if (e.getSource() == view.addNoiseButton) {
			model.addNoise(model.filePath);
			view.imageToProcess(model.filePath);
			System.out.println("Added noise to image.");
		}
	}
}
