package Task11_2;

import java.util.Date;
import java.util.Random;

public abstract class Question {
	
    public String questionText;
    public Object questionAnswer;
    public int questionScore;
	private Metadata metadata;

    public abstract void printQuestion();
    public abstract void printQuestionInfo();
    public abstract boolean checkAnswer(String userAnswer);

	public void createMetadata() { this.metadata = new Metadata(); }
	public String getAuthor() { return this.metadata.getAuthor(); }
	public Date getDate() { return this.metadata.getDate(); }

    public int generateNumber(int range) {
        Random generator = new Random();
        int i = generator.nextInt(range);
        return i;
    }

	// common
    @Override
    public boolean equals(Object obj) {
        return obj != null && obj instanceof Question
                && ((Question) obj).questionText.equals(this.questionText);
    }

	// common
    @Override
    public int hashCode() {
        String s = this.questionText;
        //System.out.println(s);
        return s.hashCode();
    }
}
