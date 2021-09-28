using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine()); // the number of temperatures to analyse
        string[] inputs = Console.ReadLine().Split(' ');
        int dif = 5526; // Max difference to start
        int dif2 = 0;   // difference calculate to compare
        int result = 0; // the value of the result
        for (int i = 0; i < n; i++)
        {
            int t = int.Parse(inputs[i]);// a temperature expressed as an integer ranging from -273 to 5526
            dif2 = Math.Abs(t-0);    // calculate absolute difference to reference
            if (dif2 < dif) {   // if is inferior 
                dif = dif2;     // keep this difference
                result = t;     // keep this temperatue
            }
            if (dif2 == dif & t > result) { // for the case where the difference is the same
                result = t;                 // we keep only the positive temperature
            }
        }
        // Write an answer using Console.WriteLine()
        // To debug: Console.Error.WriteLine("Debug messages...");

        Console.WriteLine(result);
    }
}
