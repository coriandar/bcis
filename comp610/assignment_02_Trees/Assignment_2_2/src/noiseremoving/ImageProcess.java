package noiseremoving;

import java.awt.image.BufferedImage;
import java.awt.image.WritableRaster;
import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;

public class ImageProcess {
    
    BufferedImage buffered_image = null;

	public ImageProcess() {
	}
    
    public ImageProcess(String image) {
        try { buffered_image = ImageIO.read(new File(image)); }
		catch (IOException ex) { System.out.println("IOException: " + ex.getMessage()); }
    }
    
    public void reverseColour() {
        int width = buffered_image.getWidth();
        int height = buffered_image.getHeight();
        WritableRaster writeable_raster = buffered_image.getRaster();

        for(int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {
                int colour = buffered_image.getRGB(j, i);
                
                int[] pixel = new int[3];
                pixel[2] = colour & 0xff;               //blue
                pixel[1] = (colour & 0xff00) >> 8;      //green
                pixel[0] = (colour & 0xff0000) >> 16;   //red
                
                pixel[0] = 255 - pixel[0];
                pixel[1] = 255 - pixel[1];
                pixel[2] = 255 - pixel[2];
                
                writeable_raster.setPixel(j, i, pixel);
            }
        }
    }
    
    public void save(String imageName) {
        int i = imageName.indexOf(".");
        String type = imageName.substring(i+1);
        try {ImageIO.write(buffered_image, type, new File(imageName));}
        catch (IOException e) {System.err.println("image not saved.");}
    }
    
    public void addNoise(float density) {
        int width = buffered_image.getWidth();
        int hight = buffered_image.getHeight();
        WritableRaster writeable_raster = buffered_image.getRaster();

        for(int i = 0; i < hight; i++) {
            for(int j = 0; j < width; j++) {
                int colour = buffered_image.getRGB(j, i);
                
                int[] pixel = new int[3];
                pixel[2] = colour & 0xff;               //blue
                pixel[1] = (colour & 0xff00) >> 8;      //green
                pixel[0] = (colour & 0xff0000) >> 16;   //red
                
                if(Math.random()<density) {
                    int noise = (int)(255*Math.round(Math.random()));
                    pixel[0] = noise;
                    pixel[1] = noise;
                    pixel[2] = noise;
                }
                writeable_raster.setPixel(j, i, pixel);
            }
        }
    }
    
    public void removeNoise() {
        int width = buffered_image.getWidth();
        int hight = buffered_image.getHeight();
        WritableRaster writeable_raster = buffered_image.getRaster();

        for(int i = 1; i < hight-1; i++) {
            for(int j = 1; j < width-1; j++) {
                //central pixel + 8 surrounding  pixels = 9 pixels
                //each pixel has 3 channels: Red, Green and Blue（Ignore alpha channel) 
                Integer[] intensity_r = new Integer[9]; // arrays to sort
                Integer[] intensity_g = new Integer[9]; // arrays to sort
                Integer[] intensity_b = new Integer[9]; // arrays to sort
                int index = 0;
                int[] pixel = new int[3];
                
				//getting surranding pixels 
                for(int k = -1; k < 2; k++) {
                    for(int l = -1; l < 2; l++) {
                        // get pixel colour
                        int colour = buffered_image.getRGB(j+k, i+l);
                
                        //get different colour channels(Red, Green and Blue)
                        pixel[2] = colour & 0xff;               //blue
                        pixel[1] = (colour & 0xff00) >> 8;      //green
                        pixel[0] = (colour & 0xff0000) >> 16;   //red
                        
                        //pass the channels' colour to different intensity array
                        intensity_b[index] = pixel[2];
                        intensity_g[index] = pixel[1];
                        intensity_r[index] = pixel[0];
                        index ++;
                    }
				}
                
				// DO NOT USE Array.sort() METHOD
                // Sort 9 pixels' for each channel 
				// start of your code
                // 1. create CollectionSort object 
                // 2. pass intensity_r[] to the CollectionSort object   
                // 3. call quickSort() from CollectionSort object
				// 4. do steps 2 and 3 for intensity_g and intensity_b    
				CollectionSort arraySort = new CollectionSort();
				arraySort.setArray(intensity_r);
				arraySort.quickSort();
				arraySort.setArray(intensity_g);
				arraySort.quickSort();
				arraySort.setArray(intensity_b);
				arraySort.quickSort();
                // end of your code
                
                // index 4 always points to medain after sorting
                // replace the pixel's each channel value by the median
                pixel[2] = intensity_b[4];
                pixel[1] = intensity_g[4];
                pixel[0] = intensity_r[4];
                
                // save the pixel to an image
                writeable_raster.setPixel(j, i, pixel);
            }
        }
    }       
}
