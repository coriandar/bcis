
package xbouncingBall;

/**
 *
 * @author coriandar
 */

import javax.swing.*;

public class MyPanel extends JPanel {

    public MyPanel() {
        // create a JButton object
        JButton button = new JButton("Click me!");

        // add the button to the JPanel
        add(button);
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("My Panel Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().add(new MyPanel()); // adds the MyPanel to the frame
        frame.pack();
        frame.setVisible(true);
    }
}
