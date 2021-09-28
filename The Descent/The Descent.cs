using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
class Player
{
    static void Main(string[] args)
    {

        // game loop
        while (true)
        {
            int max = 0;    // height of heightest mountain
            int imax = 0;   // i of the hightest mountain
            for (int i = 0; i < 8; i++)
            {
                int mountainH = int.Parse(Console.ReadLine()); // represents the height of one mountain.
                if (mountainH >= max) { // compares the height of the mountain with the stored max
                    max = mountainH;    // assigns the new value if the height was bigger than the max
                    imax = i;   // identifies the number the highest mountain
            }
            }

            // Write an action using Console.WriteLine()
            // To debug: Console.Error.WriteLine("Debug messages...");

            Console.WriteLine(imax); // The index of the mountain to fire on.

        }
    }
}
