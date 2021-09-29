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
        int N = int.Parse(Console.ReadLine());
        int[] P = new int[N];
        int minDif = 10000000;
        for (int i = 0; i < N; i++)
        {
            int pi = int.Parse(Console.ReadLine());
            P[i] = pi;
        }
        Array.Sort(P);

        for (int j = 0; j < N-1; ++j) {
            if (P[j+1] - P[j] < minDif) {
                minDif = P[j+1] - P[j];
        }
    }
        // Write an answer using Console.WriteLine()
        // To debug: Console.Error.WriteLine("Debug messages...");

        Console.WriteLine(minDif);
    }
}
