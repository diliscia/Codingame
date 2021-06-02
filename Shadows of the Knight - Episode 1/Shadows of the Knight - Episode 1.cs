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
class Player
{
    static void Main(string[] args)
    {
        string[] inputs;
        inputs = Console.ReadLine().Split(' ');
        int W = int.Parse(inputs[0]); // width of the building.
        int H = int.Parse(inputs[1]); // height of the building.
        int N = int.Parse(Console.ReadLine()); // maximum number of turns before game over.
        inputs = Console.ReadLine().Split(' ');
        int X0 = int.Parse(inputs[0]);
        int Y0 = int.Parse(inputs[1]);
        int X1 = 0; // minimum value of x in where the bomb might be 
        int Y1 = 0; // minimum value of y in where the bomb might be
        int X2 = W; // maximum value of x in where the bomb might be
        int Y2 = H; // maximum value of y in where the bomb might be

        // game loop
        while (true)
        {
            string bombDir = Console.ReadLine(); // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        if (bombDir.Contains('U')) // if the bomb is Up the maximum value of y is y0
            Y2 = Y0;
        if (bombDir.Contains('D')) // if the bomb is Down the minimum  value of y is y0
            Y1 = Y0;
        if (bombDir.Contains('L')) // if the bomb is to the Left the maximum value of x is x0
            X2 = X0;
        if (bombDir.Contains('R')) // if the bomb is to the Right the minimum value of x is x0
            X1 = X0;

        X0 = X1 + (X2  - X1)/2;    // coordinate x of the next window Batman should jump to
        Y0 = Y1 + (Y2  - Y1)/2;    // coordinate y of the next window Batman should jump to
            // Write an action using Console.WriteLine()
            // To debug: Console.Error.WriteLine("Debug messages...");
            // the location of the next window Batman should jump to.
            Console.WriteLine(X0 + " " + Y0);
        }
    }
}
