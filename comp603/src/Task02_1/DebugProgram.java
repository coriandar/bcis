package Task02_1;

public class DebugProgram {

    public static void main(String[] args) {
        DebugProgram dp = new DebugProgram();
        dp.bugMethod();
    }

    public void bugMethod() {
        //There are TWO issues in this program
        //Make a breakpoint at any line in the for loop
        //Observe the variables and figure out the issues
        Dogs d1 = new Dogs("doggy1 ", "white");
        Dogs d2 = new Dogs("doggy2 ", "black");
        Dogs d3 = new Dogs("doggy3 ", "white");
        Dogs d4 = new Dogs("doggy4 ", "yellow");
        Dogs d5 = new Dogs("doggy5 ", "black and white");

        Dogs[] dogArray = new Dogs[]{d1, d2, d3, d4, d5};

        /**
         * *****************************************************************
         * ANSWER
         * *****************************************************************
         * Bug 1: i <= dogArray.length, which should be i<dogArray.length This
         * can be figured out through observing the value of i and the length of
         * array. Bug 2: given null for the name of Dogs d5, calling trim()
         * function on a null value will throw excpetions. You can simply add an
         * if condition, checking whether dogName == null
         */
        for (int i = 0; i <= dogArray.length; i++) {
            String dogName = dogArray[i].getName();
            System.out.println(dogName.trim());
        }
    }
}
