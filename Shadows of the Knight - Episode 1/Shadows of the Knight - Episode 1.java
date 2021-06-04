import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Player {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int W = in.nextInt(); // width of the building.
        int H = in.nextInt(); // height of the building.
        int N = in.nextInt(); // maximum number of turns before game over.
        int X0 = in.nextInt();
        int Y0 = in.nextInt();
        int X1 = 0;  // minimum value of x in where the bomb might be 
        int Y1 = 0; // minimum value of y in where the bomb might be
        int X2 = W; // maximum value of x in where the bomb might be
        int Y2 = H; // maximum value of y in where the bomb might be

        // game loop
        while (true) {
            String bombDir = in.next(); // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
            if (bombDir.contains("U")) // if the bomb is Up the maximum value of y is y0
                Y2 = Y0;
            if (bombDir.contains("D")) // if the bomb is Down the minimum  value of y is y0
                Y1 = Y0;
            if (bombDir.contains("L")) // if the bomb is to the Left the maximum value of x is x0
                X2 = X0;
            if (bombDir.contains("R")) // if the bomb is to the Right the minimum value of x is x0
                X1 = X0;

            X0 = X1 + (X2  - X1)/2;    // coordinate x of the next window Batman should jump to
            Y0 = Y1 + (Y2  - Y1)/2;    // coordinate y of the next window Batman should jump to

            // Write an action using System.out.println()
            // To debug: System.err.println("Debug messages...");
            // the location of the next window Batman should jump to.
            System.out.println(X0 + " " + Y0);
        }
    }
}
