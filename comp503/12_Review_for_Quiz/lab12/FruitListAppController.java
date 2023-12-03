package lab12;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.event.DocumentEvent;
import javax.swing.event.DocumentListener;

public class FruitListAppController extends JFrame  {

	private FruitListModel fruitListModel;
	private FruitListPanel view;
	//------------------------------------------------------------------------
	public FruitListAppController(String title)
	{
		super(title);

		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(290,230);
		setResizable(false);

		//populate the model....
		fruitListModel = new FruitListModel();
		fruitListModel.addFruit("Apples");
		fruitListModel.addFruit("Oranges");
		fruitListModel.addFruit("Bananas");
		fruitListModel.addFruit("Apricots");		

		this.view = new FruitListPanel(fruitListModel);		
		add(view);
		//to add an item we require the user to type 
		//the item into the text field and then press add.
		view.getAddButton().addActionListener(new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent e) {
				eventHandlerAddButton();
			}
		});
		
		view.getNewItemField().getDocument().addDocumentListener(new DocumentListener()
		{

			@Override
			public void changedUpdate(DocumentEvent arg0) 
			{
				eventHandlerInputTextChanged();				
			}

			@Override
			public void insertUpdate(DocumentEvent arg0) 
			{
				eventHandlerInputTextChanged();				
			}

			@Override
			public void removeUpdate(DocumentEvent arg0) 
			{
				eventHandlerInputTextChanged();
				
			}
			
		});	
		
		view.getRemoveButton().addActionListener(new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent e) 
			{
				eventHandlerRemoveButton();
			}
		});
	}
	
	private void eventHandlerInputTextChanged()
	{		
		boolean empty = view.getNewItemField().getText().isEmpty(); 		
		view.getAddButton().setEnabled(!empty);	
		/*
		 * if(view.getNewItemField().getText().isEmpty()) {
		 * view.getAddButton().setEnabled(false); } else {
		 * view.getAddButton().setEnabled(true); }
		 */		
	}
	//------------------------------------------------------------------------
	private void eventHandlerAddButton()
	{
		String inputText = view.getNewItemField().getText();

		//remove unnecessary whitespace from string
		inputText = inputText.trim();
		
		if(fruitListModel.contains(inputText))
		{
			JOptionPane.showMessageDialog(this, "You already have "+inputText);
		}
		else{
			if(!inputText.isEmpty())
			{		
				fruitListModel.addFruit(inputText);			
			}
		}

		//now update the view
		view.update();
	}
	//------------------------------------------------------------------------
	private void eventHandlerRemoveButton()
	{
		int index = view.getFruitList().getSelectedIndex();

		//remove item from fruit list.
		this.fruitListModel.removeFruit(index); 

		//update the view.
		view.update();
	}
	//------------------------------------------------------------------------
	public static void main(String[] args) 
	{
		FruitListAppController app = new FruitListAppController("Fruit list app");
		app.setVisible(true);
	}
}
