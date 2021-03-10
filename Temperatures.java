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
        int n = in.nextInt(); // the number of temperatures to analyse
        int dif = 5526;
        int dif2 = 0;
        int result = 0;        
        for (int i = 0; i < n; i++) {
            int t = in.nextInt(); // a temperature expressed as an integer ranging from -273 to 5526
            dif2 = Math.abs(t-0);   // calculate absolute difference to reference
            if (dif2 < dif) {       // if is inferior 
                dif = dif2;         // if is inferior 
                result = t;         // keep this temperatue
            }
            else if (dif2 == dif && t > result) {   // for the case where the difference is the same
                result = t;                         // we keep only the positive temperature 
            }
        }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");
        System.out.println(result);
    }
}
