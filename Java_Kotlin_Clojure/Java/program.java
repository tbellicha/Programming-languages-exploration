package Java;

public class program {
    public static void main(String[] args) {
        Hangman hangman = new Hangman();

        requirements.execForLoop();
        requirements.execWhileLoop();
        requirements.execDoWhileLoop();

        System.out.println(requirements.stringConcatenation("Hello ", "world"));

        hangman.play();
    }
}
