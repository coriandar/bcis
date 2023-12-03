package Task06_1;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class SimpleGUI extends JFrame implements ActionListener {
	private JTextField text = new JTextField(20);
	private JLabel label = new JLabel();
	private BGPanel panel = new BGPanel();

	public SimpleGUI() {
		// setup JFrame
		this.setTitle("SimpleGUI");
		this.setSize(410, 350);
		this.setLocation(100, 100);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		text.addActionListener(this);
		panel.add(label, BorderLayout.NORTH);

		// add JPanels to Frame
		this.getContentPane().add(panel, BorderLayout.CENTER); // BG
		this.getContentPane().add(addSouth(), BorderLayout.SOUTH);
	}

	public static void main(String[] args) {
		SimpleGUI test = new SimpleGUI();
		test.setVisible(true);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		this.label.setText(text.getText());
	}

	private JPanel addSouth () {
		JPanel southPanel = new JPanel();

		JButton b = new JButton("Update");
		b.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				label.setText(text.getText());
			}
		});

		southPanel.add(this.text);
		southPanel.add(b);

		return southPanel;
	}

	private static void setSizeToScreen(JFrame f) {
		Toolkit kit = Toolkit.getDefaultToolkit();
		Dimension screenSize = kit.getScreenSize();
		int frameW = screenSize.width / 2;
		int frameH = screenSize.height / 2;
		f.setSize(frameW, frameH);
	}
}
