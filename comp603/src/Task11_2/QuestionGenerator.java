package Task11_2;

import java.util.HashSet;
import java.util.Random;

public class QuestionGenerator {

	public static HashSet<Question> createQuestionSet(int setSize, int types) {
		HashSet<Question> questions = new HashSet<>();
		while (questions.size() < setSize) {
			int rand = getRand(types);
			if (rand == 0) questions.add(new QuestionMath());
			// add more here
			else questions.add(new QuestionMulti());
		}
		return questions;
	}

    private static int getRand(int range) {
        Random generator = new Random();
        int i = generator.nextInt(range);
        return i;
    }
}
