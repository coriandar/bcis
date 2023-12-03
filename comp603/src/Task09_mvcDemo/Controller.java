package Task09_mvcDemo;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.sound.sampled.AudioSystem;

class Controller implements ActionListener {

    Model model;
    View view;

    Controller() {
        System.out.println("Controller()");
    }

    Controller(Model model, View view) {
		addModel(model); // to access model
		addView(view); // to get buttons
    }

    //invoked when a button is pressed
    @Override
    public void actionPerformed(ActionEvent e) {
        System.out.println("Controller: acting on Model");
		if (e.getSource() == view.button) model.incrementValue();
		else if (e.getSource() == view.button2) model.decrementValue();
    }

    public void addModel(Model m) {
        System.out.println("Controller: adding model");
        this.model = m;
    }

    public void addView(View v) {
        System.out.println("Controller: adding view");
        this.view = v;
    }
}
