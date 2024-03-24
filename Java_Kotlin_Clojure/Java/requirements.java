package Java;

import java.lang.Math;

public class requirements {
    static void execForLoop() {
        String base = "The answer is ";
        float f = 42.0f;
        for (int i = 0; i < 4; i++) {
            String toPrint = base + f;

            System.out.println(toPrint);
        }
    }

    static void execWhileLoop() {
        int i = 0;
        while (i++ < 8) {
            System.out.println(((int) Math.pow(i, 2)));
        }
    }

    static void execDoWhileLoop() {
        int i = 0;
        do {
            System.out.println((int) Math.pow(2, i));
        } while (i++ < 8);
    }

    static String stringConcatenation(String s1, String s2) {
        return s1 + s2;
    }
}