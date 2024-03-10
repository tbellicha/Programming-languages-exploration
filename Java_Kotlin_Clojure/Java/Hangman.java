package Java;

import java.util.Scanner;

public class Hangman {
    private static final String[] words = { "Tanguy", "WorthAnA", "java", "clojure", "scala", "kotlin", "aws",
            "computer",
            "code",
            "programming" };
    private static final int MAX_GUESSES = 6;

    private String word;
    private StringBuilder guessedWord;
    private int remainingGuesses;

    public Hangman() {
        word = words[(int) (Math.random() * words.length)];
        guessedWord = new StringBuilder(word.length());
        for (int i = 0; i < word.length(); i++) {
            guessedWord.append("_");
        }
        remainingGuesses = MAX_GUESSES;
    }

    public void play() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("\nLet's play Hangman !");

        while (remainingGuesses > 0 && guessedWord.indexOf("_") != -1) {
            System.out.println("Word: " + guessedWord + " (" + word.length() + ")");
            System.out.print("Guesses left: " + remainingGuesses + ", enter a letter to guess: ");
            char guess = scanner.nextLine().toLowerCase().charAt(0);

            if (!updateGuess(guess)) {
                remainingGuesses--;
            }
        }

        scanner.close();

        if (remainingGuesses > 0) {
            System.out.println("\nCongratulations, you found the word! (" + word + ")");
        } else {
            System.out.println("Game over. The word was: " + word);
        }
    }

    private boolean updateGuess(char guess) {
        boolean found = false;
        for (int i = 0; i < word.length(); i++) {
            if (word.charAt(i) == guess) {
                guessedWord.setCharAt(i, guess);
                found = true;
            }
        }
        return found;
    }
}