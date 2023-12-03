package Task11_2;

import java.util.Random;

public class QuestionMath extends Question {

    //for quiz question
    private int num1 = 0;
    private int num2 = 0;
    private String mathOp;
	
	public QuestionMath() {
		this.num1 = this.generateNumber(100);
		this.num2 = this.generateNumber(100);
		this.mathOp = this.generateOperator();
		while (mathOp.equals("/") && num2 == 0) this.num2 = this.generateNumber(100);

		//the attributes inherited from the parent: Question
		this.questionText = num1 + mathOp + num2 + "= ?";
		this.questionAnswer = getResult() + "";
		this.questionScore = 5;
		this.createMetadata();
	}

    public String generateOperator() {
        Random generator = new Random();
        int i = generator.nextInt(4);
		if (i == 0) return "+";
		else if (i == 1) return "-";
		else if (i == 2) return "*";
		else return "/";
    }

    public double getResult() {
		if(mathOp.equals("+")) return num1 + num2;
		else if(mathOp.equals("-")) return num1 - num2;
		else if(mathOp.equals("*")) return num1 * num2;
		else return 1.0 * num1 / num2;
    }

	@Override
	public void printQuestion() {
		System.out.println("Quiz Question: " + this.questionText);
		System.out.println("Your answer is: ");
	}

	@Override
	public void printQuestionInfo() {
		System.out.println("Quiz Question: " + this.questionText);
		System.out.println("The correct answer is: " + this.questionAnswer);
		System.out.println("The score of this question weights: " + this.questionScore);
		System.out.println("Created by " + this.getAuthor() + ", Created on " + this.getDate());
	}

	@Override
	public boolean checkAnswer(String userAnswer) {
        boolean result = false;
		double userAnswerInt = 0;
		try {
			userAnswerInt = Double.parseDouble(userAnswer);
			if (Math.abs(userAnswerInt - getResult()) < 0.1) result = true;
		}
		catch (Exception ex) { System.out.println("User's input is invalid!"); }
        return result;
	}
}
