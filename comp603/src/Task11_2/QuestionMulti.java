package Task11_2;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class QuestionMulti extends Question {
    //for multiple choice question
    private String questionOptions;
    private String explanation;

	public QuestionMulti() {
		//Obtain all the questions from text file
		List<String> questionList = new ArrayList<>();
		try {
			BufferedReader br = new BufferedReader(new FileReader("./resources/T11_ml_question.txt"));
			String line = "";
			while ((line = br.readLine()) != null) questionList.add(line.trim());
			br.close();
		}
		catch (IOException ex) { System.err.println("IOException Error: " + ex.getMessage()); }

		String[] questionArray = questionList.get(generateNumber(questionList.size())).split("\\|");

		this.questionText = questionArray[0];
		this.questionOptions = questionArray[1];
		this.questionAnswer = questionArray[2];
		this.explanation = questionArray[3];
		this.questionScore = 10;
		this.createMetadata();
	}

	@Override
	public void printQuestion() {
		System.out.println("Multiple Choice Question: " + this.questionText);
		System.out.println(this.questionOptions);
		System.out.println("Your answer is: ");
	}

	@Override
	public void printQuestionInfo() {
		System.out.println("Multiple Choice Question: " + this.questionText);
		System.out.println(this.questionOptions);
		System.out.println("The correct answer is: " + this.questionAnswer);
		System.out.println("Explanation: " + this.explanation);
		System.out.println("The score of this question weights: " + this.questionScore);
		System.out.println("Created by " + this.getAuthor() + ", Created on " + this.getDate());
	}

	@Override
	public boolean checkAnswer(String userAnswer) {
        boolean result = false;
		if (this.questionAnswer.toString().trim().equalsIgnoreCase(userAnswer.trim())) {
			result = true;
		}
        return result;
	}
}
