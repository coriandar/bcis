package examples;
/**
 * 
 * Adapted from Dathan, B. & Ramnath S. (2015). 
 * Object-Oriented Analysis and Design. 
 * Universities Press, Springer.
 * 
 * */
import javax.swing.JOptionPane;

public class MonthSelection {

	public static void main(String[] args) 
	{
		String response = JOptionPane.showInputDialog("Enter month 1-12"); 		
		int month = Integer.parseInt(response);
		String monthDesc = "";
		switch(month) {
		case 1:  monthDesc= "Jan";break;
		case 2:  monthDesc= "Feb";break;
		case 3:  monthDesc= "Mar";break;
		case 4:  monthDesc= "Apr";break;
		case 5:  monthDesc= "May";break;
		case 6:  monthDesc= "Jun";break;
		case 7:  monthDesc= "Jul";break;
		case 8:  monthDesc= "Aug";break;
		case 9:  monthDesc= "Sep";break;
		case 10: monthDesc= "Oct";break;
		case 11: monthDesc= "Nov";break;
		case 12: monthDesc= "Dec";break;
		default: monthDesc = "?";
		}
		System.out.println(monthDesc);

	}

}
