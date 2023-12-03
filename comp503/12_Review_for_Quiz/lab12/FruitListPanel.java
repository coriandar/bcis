package lab12;

import javax.swing.JButton;
import javax.swing.JList;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextField;
import javax.swing.ScrollPaneConstants;

public class FruitListPanel extends JPanel{

	private JTextField newItemField;
	private JButton addButton;
	private JButton removeButton;
	private JList fruitList;
	private JScrollPane scrollPane;

	private FruitListModel fruitListModel;

	public JTextField getNewItemField()
	{
		return this.newItemField;
	}

	public JButton getAddButton()
	{
		return this.addButton;
	}

	public JButton getRemoveButton()
	{
		return this.removeButton;
	}

	public JList getFruitList()
	{
		return this.fruitList;
	}

	public FruitListPanel(FruitListModel model)
	{
		super();

		this.fruitListModel = model;
		setLayout(null);
		//text field.
		this.newItemField = new JTextField("Grapes");
		this.newItemField.setLocation(10,10);
		this.newItemField.setSize(150,25);
		add(newItemField);

		//add button
		this.addButton = new JButton("Add");
		this.addButton.setLocation(175, 10);
		this.addButton.setSize(100, 25);
		add(addButton);

		//remove button
		this.removeButton = new JButton("Remove");
		this.removeButton.setLocation(175, 45);
		this.removeButton.setSize(100, 25);
		add(removeButton);

		fruitList = new JList(fruitListModel.toList());

		scrollPane = new JScrollPane(fruitList,
				ScrollPaneConstants.VERTICAL_SCROLLBAR_AS_NEEDED,
				ScrollPaneConstants.HORIZONTAL_SCROLLBAR_ALWAYS);

		scrollPane.setLocation(10, 45);
		scrollPane.setSize(150,150);
		add(scrollPane);
	}
	/**
	 * updates the view according to the state of the model.
	 * */
	public void update() 
	{
		this.fruitList.setListData(this.fruitListModel.toList());
		this.removeButton.setEnabled(this.fruitListModel.getSize() != 0);
	}
}
