import java.util.*;
import java.io.*;
import java.math.*;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
class Player {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);

        // game loop
        while (true) {
            int max = 0;    // heightest mountain 
            int imax = 0;   // i of the highest mountain
            for (int i = 0; i < 8; i++) {
                int mountainH = in.nextInt(); // represents the height of one mountain.
                if (mountainH >= max) { // compares the height of the mountain with the stored max
                    max = mountainH;    // assigns the new value if the height was bigger than the max
                    imax = i;   // identifies the number the highest mountain
                }
            }

            // Write an action using System.out.println()
            // To debug: System.err.println("Debug messages...");

            System.out.println(imax); // The index of the mountain to fire on.
        }
    }
}
