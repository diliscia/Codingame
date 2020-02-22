#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();


    int distX = lightX - initialTX; // steps distance from Thor to lighting in X
    int distY = lightY - initialTY; // steps distance from Thor to lighting in Y
    
    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
        
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        
        if ( 0 <= lightX < 40 and 0 <= lightY < 18 and 0 <= initialTX < 40 and 0 <= initialTY < 18)
           {
               if (distY == 0 and distX != 0)   // Straight line horizontally
               {              
                    if (distX > 0 )             // Straight line moving East
                    {
                        cout << 'E' << endl;
                        distX = distX - 1;
                    }
                    if (distX < 0)              // Straight line moving West
                    {
                        cout << 'W' << endl;
                        distX = distX + 1;
                    }
                }
            
                if (distY != 0 and distX == 0)  // Straight line vertically
                {
                    if (distY > 0)              // Straight line moving South
                    {
                        cout << 'S' << endl;
                        distY = distY - 1;
                    }
                    if (distY < 0)              // Straight line moving North
                    {
                        cout << 'N' << endl;
                        distY = distY + 1;
                    }
                }
    
                if (distX != 0 and distY != 0)      // Angle line 
                {
                    if (distX > 0 and distY > 0)    // Angle line moving SouthEast
                    {
                        cout << "SE" << endl;
                        distX = distX - 1;
                        distY = distY - 1;
                    }
                    if (distX < 0 and distY > 0)    // Angle line moving SouthWest
                    {
                        cout << "SW" << endl;
                        distX = distX + 1;
                        distY = distY - 1;
                    }
                    if (distX > 0 and distY < 0)    // Angle line moving NorthEast
                    {
                        cout << "NE" << endl;
                        distX = distX - 1;
                        distY = distY + 1;
                    }
                    if (distX < 0 and distY < 0)    // Angle line moving NorthWest
                    {
                        cout << "NW" << endl;
                        distX = distX + 1;
                        distY = distY + 1;
                    }
                }
           }
 
        // A single line providing the move to be made: N NE E SE S SW W or NW
        
//        cout << "SE" << endl;
    }
}
