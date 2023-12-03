package Task06_2;

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

		// set default font
		label.setFont(new Font("Georgia", Font.PLAIN, 20));

		text.addActionListener(this);
		panel.add(label, BorderLayout.NORTH);

		// add JPanels to Frame
		this.getContentPane().add(panel, BorderLayout.CENTER); // BG
		this.getContentPane().add(addSouth(), BorderLayout.SOUTH);
		this.getContentPane().add(addNorth(), BorderLayout.NORTH);
	}

	public static void main(String[] args) {
		SimpleGUI test = new SimpleGUI();
		test.setVisible(true);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		this.label.setText(text.getText());
	}

	private JPanel addNorth() {
		JPanel northPanel = new JPanel();
		northPanel.add(comboPanel("Font: ", fontCombo()));
		northPanel.add(comboPanel("Size: ", sizeCombo()));
		return northPanel;
	}

	private JPanel comboPanel(String name, JComboBox cbox) {
		JLabel label = new JLabel(name);
		JPanel combo = new JPanel();
		combo.add(label);
		combo.add(cbox);
		return combo;
	}

	private JComboBox<String> fontCombo() {
		String[] opt = {"Georgia", "Arial", "Courier New"};
		JComboBox<String> comboBox = new JComboBox<>(opt);
		comboBox.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				String sel = (String) comboBox.getSelectedItem();
				if (sel.equals(opt[0])) label.setFont(changeFont(opt[0]));
				if (sel.equals(opt[1])) label.setFont(changeFont(opt[1]));
				if (sel.equals(opt[2])) label.setFont(changeFont(opt[2]));
			}
		});
		return comboBox;
	}

	private JComboBox<Integer> sizeCombo() {
		Integer[] opt = {20, 36, 50};
		JComboBox<Integer> comboBox = new JComboBox<>(opt);
		comboBox.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				Integer sel = (Integer) comboBox.getSelectedItem();
				if (sel == opt[0]) label.setFont(changeFontSize(opt[0]));
				if (sel == opt[1]) label.setFont(changeFontSize(opt[1]));
				if (sel == opt[2]) label.setFont(changeFontSize(opt[2]));
			}
		});
		return comboBox;
	}

	private Font changeFont(String fontName) {
		return new Font(fontName, Font.PLAIN, label.getFont().getSize());
	}
	private Font changeFontSize(int size) {
		return new Font(label.getFont().getName(), Font.PLAIN, size);
	}
		
	private JPanel createCombo(String[] options, String name) {
		JPanel combo = new JPanel();
		JComboBox<String> comboBox = new JComboBox<>(options);
		JLabel label = new JLabel(name + ": ");
		combo.add(label);
		combo.add(comboBox);
		return combo;
	}

	private JPanel addSouth() {
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
