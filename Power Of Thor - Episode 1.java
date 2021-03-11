import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
class Player {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int lightX = in.nextInt(); // the X position of the light of power
        int lightY = in.nextInt(); // the Y position of the light of power
        int initialTx = in.nextInt(); // Thor's starting X position
        int initialTy = in.nextInt(); // Thor's starting Y position

        int distX = lightX - initialTx; // steps distance from Thor to lighting in X
        int distY = lightY - initialTy; // steps distance from Thor to lighting in Y

        // game loop
        while (true) {
            int remainingTurns = in.nextInt(); // The remaining amount of turns Thor can move. Do not remove this line.

            // Write an action using System.out.println()
            // To debug: System.err.println("Debug messages...");

        if ( (0 <= lightX && lightX < 40) && (0 <= lightY && lightY < 18) && (0 <= initialTx && initialTx < 40) && (0 <= initialTy & initialTy < 18))
           {
               if (distY == 0 && distX != 0)   // Straight line horizontally
               {              
                    if (distX > 0 )             // Straight line moving East
                    {
                        System.out.println("E");
                        distX = distX - 1;
                    }
                    if (distX < 0)              // Straight line moving West
                    {
                        System.out.println("W");
                        distX = distX + 1;
                    }
                }
            
                if (distY != 0 && distX == 0)  // Straight line vertically
                {
                    if (distY > 0)              // Straight line moving South
                    {
                        System.out.println("S");
                        distY = distY - 1;
                    }
                    if (distY < 0)              // Straight line moving North
                    {
                        System.out.println("N");
                        distY = distY + 1;
                    }
                }
    
                if (distX != 0 && distY != 0)      // Angle line 
                {
                    if (distX > 0 && distY > 0)    // Angle line moving SouthEast
                    {
                        System.out.println("SE");
                        distX = distX - 1;
                        distY = distY - 1;
                    }
                    if (distX < 0 && distY > 0)    // Angle line moving SouthWest
                    {
                        System.out.println("SW");
                        distX = distX + 1;
                        distY = distY - 1;
                    }
                    if (distX > 0 && distY < 0)    // Angle line moving NorthEast
                    {
                        System.out.println("NE");
                        distX = distX - 1;
                        distY = distY + 1;
                    }
                    if (distX < 0 && distY < 0)    // Angle line moving NorthWest
                    {
                        System.out.println("SW");
                        distX = distX + 1;
                        distY = distY + 1;
                    }
                }
           }
            // A single line providing the move to be made: N NE E SE S SW W or NW
            // System.out.println("SE");
        }
    }
}
