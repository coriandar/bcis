package Task11_2;

import java.util.HashSet;
import java.util.Scanner;

public class QuizMain {
    public static void main(String[] args) {
        User user = new User();

        HashSet<Question> questions = new HashSet();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Refactored Quiz");
        System.out.print("Enter your name: ");
        user.userName = scanner.nextLine();

        System.out.println("Enter your answer as a number. Press 'X' to quit.");
        String answer;

		int questionSetSize = 10;
		int questionTypes = 2;

		// if new questionType is added small modidication in QuestionGenerator class
		questions = QuestionGenerator.createQuestionSet(questionSetSize, questionTypes);

        for (Question question : questions) {
            question.printQuestion();
            do { 
				answer = scanner.nextLine();
            } while (!isValidAnswer(answer));

            if (answer.trim().equalsIgnoreCase("x")) break;

            if (question.checkAnswer(answer)) {
                user.score += question.questionScore;
                System.out.println("Correct! You get " + question.questionScore + " Points!");
            }
			else {
                user.score -= question.questionScore;
                System.out.println("Wrong! You lose " + question.questionScore + " Points!");
            }
        }
        System.out.println(user.userName + ", your score is: " + user.score);
    }

    public static boolean isValidAnswer(String answer) {
		if (answer.matches("^[a-zA-Z0-9]*$")) {
			return true;
		}
		else {
            System.out.print("Invalid Input. Please your answer again: ");
            return false;
        }
    }

}
