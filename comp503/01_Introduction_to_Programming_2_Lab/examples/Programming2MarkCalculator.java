/**
 * 
 * 
 * Simple mark calculator for Programming 2
 * 
 * Use this simple mark calculator to understand the breakdown of marks
 * 
 * Warning: this mark calculator does not in any way override marks appearing on Canvas or Arion. 
 * 
 * It may contain bugs and calculate the wrong mark
 * 
 * It does not account for DNC marks
 * 
 * @author kjohnson
 * 
 * */
package examples;

public class Programming2MarkCalculator 
{

	public static double ITEM_LABS_MAX_MARK = 10.0;	
	
	public static double MID_TERM_WEIGHT = 0.3;
	public static double ITEM_MID_TERM_MAX_MARK = 25.0;
	
	public static double INDIVIDUAL_ASSIGNMENT_WEIGHT = 0.5;
	public static double ITEM_INDIVDUAL_ASSIGNMENT_MAX_MARK = 100.0;
	
	public static double FINAL_EXAM_WEIGHT = 0.7;
	public static double ITEM_FINAL_EXAM_MAX_MARK = 100.0;	
	
	public static double CONTROLLED_ASSESSMENTS_WEIGHT = 0.5;
	public static double ASSIGNMENTS_WEIGHT = 0.3;
	public static double LABS_WEIGHT = 0.2; 
	
	
	public static void main(String[] args) 
	{	
		//student's term marks.
		double studentMidTermMark      = 25.0;
		double studentFinalExamMark    = 100.0;
		double studentAssignment1Mark  = 100.0;
		double studentAssignment2Mark  = 100.0;
		int studentTotalWeeklyLabsMark = 12;//one mark for each lab, weeks 1 to 12


		//controlled assessment component has two items: midterm is 30% and final is 70%			
		double controlledAssessmentsComponent 
		    = ((studentMidTermMark/ITEM_MID_TERM_MAX_MARK)*100)*MID_TERM_WEIGHT 
		          + studentFinalExamMark*FINAL_EXAM_WEIGHT;

		//individual assignment item has two assignments, equally weighted at 50% each
		double assignmentItem 
		= studentAssignment1Mark*INDIVIDUAL_ASSIGNMENT_WEIGHT + studentAssignment2Mark*INDIVIDUAL_ASSIGNMENT_WEIGHT;

		//lab component is the best out of 10, scaled to percentage
		double weeklyLabsItem = (Math.min(ITEM_LABS_MAX_MARK,studentTotalWeeklyLabsMark)/ITEM_LABS_MAX_MARK)*100;
		
		//final mark weights 50% controlled assessments
		//30% assignment
		//20% labs
		double finalMark = controlledAssessmentsComponent*CONTROLLED_ASSESSMENTS_WEIGHT + 
				assignmentItem*ASSIGNMENTS_WEIGHT +
				weeklyLabsItem*LABS_WEIGHT;
		
		System.out.println("Your Final Mark: "+finalMark);
	}
}
