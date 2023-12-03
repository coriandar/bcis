package noiseremoving;

import java.io.File;
import javax.swing.JFileChooser;

public class NoiseRemoving {

    public static void main(String[] args) {
        JFileChooser imageFileChooser = new JFileChooser(new File("."));
        int stateImageFileChooser = imageFileChooser.showOpenDialog(null);

        if(stateImageFileChooser == JFileChooser.APPROVE_OPTION) {
            String fileName = imageFileChooser.getSelectedFile().getPath();
            ImageProcess ip = new ImageProcess(fileName);
            ip.removeNoise(); // removes noise
            ip.save("noise_removed.jpg"); // saves as new .jpg
        }
    }
}
