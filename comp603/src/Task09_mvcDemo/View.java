package Task09_mvcDemo;

import java.awt.Label;
import java.util.Observable;
import java.util.Observer;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

class View implements Observer {

    private JTextArea myJTextArea;
    public JButton button;
    public JButton button2;

    //Components initialization
    public View() {
        System.out.println("View()");
        JFrame frame = new JFrame("simple MVC");
        frame.add("North", new Label("counter"));
        myJTextArea = new JTextArea();
        JScrollPane scrollPane = new JScrollPane(myJTextArea);
        frame.add("Center", scrollPane);
        JPanel panel = new JPanel();
        button = new JButton("Increment");
        panel.add(button);
        button2 = new JButton("Decrement");
        panel.add(button2);
        frame.add("South", panel);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);
        frame.setLocation(100, 100);
        frame.setVisible(true);
    }

    @Override
    public void update(Observable obs, Object obj) {
//        System.out.println("||" + obs); // observer
//        System.out.println("--" + obj); // obj value
        myJTextArea.append(obj + "\n");
    }

    //What is the reason for NOT registering controllor in the constructor? 
    //need a controller before adding it as a listener 
    public void addController(Controller controller) {
        System.out.println("View      : adding controller");
        button.addActionListener(controller);
        button2.addActionListener(controller);
    }
}
