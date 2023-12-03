package noiseremoving;

import java.awt.Image;
import javax.swing.*;

/**
 * @question 2.2 NoiseRemoving
 */
public class MVCView extends JFrame {

	public JPanel userPanel = new JPanel();
	public JLabel image = new JLabel();
	public JButton denoiseButton = new JButton("Denoise");
	public JButton addNoiseButton = new JButton("Noisify");
	public JButton loadImageButton = new JButton("Load");
	public ImageIcon beforeImage;

    /**
     * Constructor, default GUI.
     */
	public MVCView() {
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setSize(1000, 1000);
		this.setLocation(500, 200);
		this.setResizable(false);
		this.setVisible(true);
		mainView();
	}

    /**
     * Add action listeners to buttons.
     * 
     * @param controller object
     */
	public void addController(MVCController controller) {
		denoiseButton.addActionListener(controller);
		addNoiseButton.addActionListener(controller);
		loadImageButton.addActionListener(controller);
	}

    /**
     * Sets to main view
     */
	public void mainView() {
		userPanel.add(loadImageButton);
		userPanel.add(denoiseButton);
		userPanel.add(addNoiseButton);
		this.add(userPanel);
	}

    /**
     * Loads image to process into GUI.
     * @param filePath of image
     */
	public void imageToProcess(String filePath) {
		this.userPanel.removeAll();
		this.mainView();
		this.image = new JLabel(new ImageIcon(scaleImage(filePath)));
		this.userPanel.add(this.image);
		this.add(userPanel);
		this.revalidate();
		this.repaint();
	}

    /**
     * Scales the image to fit within GUI.
     * 
     * @param filePath of image
     * @return scaled image
     */
	private Image scaleImage(String filePath) {
		Image img = new ImageIcon(filePath).getImage();
		int w = img.getWidth(null);
		int h = img.getHeight(null);
		int max = w <= h ? h : w; // finds the max dimension of image

        // Get scale factor
		double scale = 1.0;
		if (max < 900) scale = 900.0 / max; 
		else scale = max / 900.0; 

		int wScaled = 0;
		int hScaled = 0;

		if (max <= 900) { // scales image up maintain aspect ratio
			wScaled = (int) (w * scale);
			hScaled = (int) (h * scale);
		}
		else if (max > 900) { // scales image down, maintain aspect ratio
			wScaled = (int) (w / scale);
			hScaled = (int) (h / scale);
		}
		return img.getScaledInstance(wScaled, hScaled, Image.SCALE_SMOOTH);
	}
}
