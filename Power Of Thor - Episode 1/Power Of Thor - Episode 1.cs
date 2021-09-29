using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
class Player
{
    static void Main(string[] args)
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int lightX = int.Parse(inputs[0]); // the X position of the light of power
        int lightY = int.Parse(inputs[1]); // the Y position of the light of power
        int initialTx = int.Parse(inputs[2]); // Thor's starting X position
        int initialTy = int.Parse(inputs[3]); // Thor's starting Y position

        int distX = lightX - initialTx; // steps distance from Thor to lighting in X
        int distY = lightY - initialTy; // steps distance from Thor to lighting in Y
  
        // game loop
        while (true)
        {
            int remainingTurns = int.Parse(Console.ReadLine()); // The remaining amount of turns Thor can move. Do not remove this line.

            // Write an action using Console.WriteLine()
            // To debug: Console.Error.WriteLine("Debug messages...");
            //if ((0 <= lightX < 40) && (0 <= lightY < 18) && (0 <= initialTx < 40) && (0 <= initialTy < 18))
            {
                if (distY == 0 && distX != 0)   // Straight line horizontally
                {              
                        if (distX > 0)             // Straight line moving East
                        {
                            Console.WriteLine("E");
                            distX = distX - 1;
                        }
                        if (distX < 0)              // Straight line moving West
                        {
                            Console.WriteLine("W");
                            distX = distX + 1;
                        }
                    }
                
                    if (distY != 0 && distX == 0)  // Straight line vertically
                    {
                        if (distY > 0)              // Straight line moving South
                        {
                            Console.WriteLine("S");
                            distY = distY - 1;
                        }
                        if (distY < 0)              // Straight line moving North
                        {
                            Console.WriteLine("N");
                            distY = distY + 1;
                        }
                    }
        
                    if (distX != 0 && distY != 0)      // Angle line 
                    {
                        if (distX > 0 && distY > 0)    // Angle line moving SouthEast
                        {
                            Console.WriteLine("SE");
                            distX = distX - 1;
                            distY = distY - 1;
                        }
                        if (distX < 0 && distY > 0)    // Angle line moving SouthWest
                        {
                            Console.WriteLine("SW");
                            distX = distX + 1;
                            distY = distY - 1;
                        }
                        if (distX > 0 && distY < 0)    // Angle line moving NorthEast
                        {
                            Console.WriteLine("NE");
                            distX = distX - 1;
                            distY = distY + 1;
                        }
                        if (distX < 0 && distY < 0)    // Angle line moving NorthWest
                        {
                            Console.WriteLine("NW");
                            distX = distX + 1;
                            distY = distY + 1;
                        }
                    }
            }

            // A single line providing the move to be made: N NE E SE S SW W or NW
//            Console.WriteLine("SE");
        }
    }
}
