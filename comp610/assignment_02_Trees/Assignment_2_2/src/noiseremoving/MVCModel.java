package noiseremoving;

import java.io.File;
import javax.swing.JFileChooser;

/**
 * @question 2.2 NoiseRemoving
 */
public class MVCModel {

	public String filePath;
	private String parentDir;
	private String type;
	private int stateImageFileChooser;
	private JFileChooser file;

    /**
     * Constructor, default.
     */
	public MVCModel() {
	}

    /**
     * Loads the image, getting file path, parent directory path,
     * and file type.
     */
	public void loadImage() {
		this.file = new JFileChooser(new File("."));
		this.stateImageFileChooser = file.showOpenDialog(null);
		if (stateImageFileChooser == JFileChooser.APPROVE_OPTION) {
			this.filePath = file.getSelectedFile().getPath();
			this.parentDir = file.getSelectedFile().getParent();
			this.type = getType(file);
		}
	}

    /**
     * Denoises the image.
     * 
     * @param filePathOG, path to file
     */
    //TODO: rename filePathOG to
	public void denoise(String filePathOG) {
		if (stateImageFileChooser == JFileChooser.APPROVE_OPTION) {
			ImageProcess ip = new ImageProcess(filePathOG);
			ip.removeNoise(); // removes noise
			String saveName = getName(file) + "_removed" + this.type;
			ip.save(saveName); // saves as new .jpg
			this.filePath = parentDir + "\\" + saveName;
		}
	}

    /**
     * Adds noise to the image.
     * 
     * @param filePathOG, path to file
     */
    //TODO: rename filePathOG to
	public void addNoise(String filePathOG) {
		if (stateImageFileChooser == JFileChooser.APPROVE_OPTION) {
			ImageProcess ip = new ImageProcess(filePathOG);
			ip.addNoise(0.10f); // adds noise
			String saveName = getName(file) + "_added" + this.type;
			ip.save(saveName); // saves as new .jpg
			this.filePath = parentDir + "\\" + saveName;
		}
	}

    /**
     * @param file, to get name of
     * @return name of file, removing filepath and type.
     */
	private String getName(JFileChooser file) {
		String name = file.getSelectedFile().getName();
		int i = name.indexOf(".");
		return name.substring(0, i);
	}

    /**
     * @param file, to get type of
     * @return file type extension
     */
	private String getType(JFileChooser file) {
		String name = file.getSelectedFile().getName();
		int i = name.indexOf(".");
		return name.substring(i);
	}
}
