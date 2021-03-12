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
        int minDif = 10000000;
        int N = in.nextInt();
        Vector<Integer> p = new Vector<Integer>();
        for (int i = 0; i < N; i++) {
            int pi = in.nextInt();
            p.add(pi);
        }
        Collections.sort(p);

        for (int j = 0; j < N-1; j++) {
            if (p.get(j+1) - p.get(j) < minDif) {
            minDif = p.get(j+1) - p.get(j);
            }
        }

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(minDif);
    }
}
