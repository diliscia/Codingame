import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int L = in.nextInt();   // length of each letter
        int H = in.nextInt();   // height of each letter
        if (in.hasNextLine()) {
            in.nextLine();
        }
        String T = in.nextLine();   // word to be written in ASCII Art
        String ALFA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?";    // uppercase alphabet
        Vector<String> ASCIIALFA = new Vector<String>();
        for (int i = 0; i < H; i++) {
            String ROW = in.nextLine();
            ASCIIALFA.add(ROW); // registering the ASCII alfabet
        }
        T = T.toUpperCase();
        for (int line = 0; line < H; line++) {
            for (int letter = 0; letter < T.length(); letter++){  //  finding index of each letter in the word
                int idx = ALFA.indexOf(T.charAt(letter));
                if (idx == -1) { 
                    idx = (ALFA.length() - 1);
                }
                System.out.print(ASCIIALFA.get(line).substring(idx*L,idx*L+L));    // printing the lines
            }
            System.out.println("");    // passing to the next line
        }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");
    }
}
