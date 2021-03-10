/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

var inputs = readline().split(' ');
const lightX = parseInt(inputs[0]); // the X position of the light of power
const lightY = parseInt(inputs[1]); // the Y position of the light of power
const initialTx = parseInt(inputs[2]); // Thor's starting X position
const initialTy = parseInt(inputs[3]); // Thor's starting Y position

var distX = lightX - initialTx; // steps distance from Thor to lighting in X
var distY = lightY - initialTy; // steps distance from Thor to lighting in Y

// game loop
while (true) {
    const remainingTurns = parseInt(readline()); // The remaining amount of turns Thor can move. Do not remove this line.

    // Write an action using console.log()
    // To debug: console.error('Debug messages...');

        if ( 0 <= lightX < 40 && 0 <= lightY < 18 && 0 <= initialTx < 40 && 0 <= initialTy < 18)
           {
               if (distY == 0 && distX != 0)   // Straight line horizontally
               {              
                    if (distX > 0 )             // Straight line moving East
                    {
                        console.log('E');
                        distX = distX - 1;
                    }
                    if (distX < 0)              // Straight line moving West
                    {
                        console.log('W');
                        distX = distX + 1;
                    }
                }
            
                if (distY != 0 && distX == 0)  // Straight line vertically
                {
                    if (distY > 0)              // Straight line moving South
                    {
                        console.log('S');
                        distY = distY - 1;
                    }
                    if (distY < 0)              // Straight line moving North
                    {
                        console.log('N');
                        distY = distY + 1;
                    }
                }
    
                if (distX != 0 && distY != 0)      // Angle line 
                {
                    if (distX > 0 && distY > 0)    // Angle line moving SouthEast
                    {
                        console.log('SE');
                        distX = distX - 1;
                        distY = distY - 1;
                    }
                    if (distX < 0 && distY > 0)    // Angle line moving SouthWest
                    {
                        console.log('SW');
                        distX = distX + 1;
                        distY = distY - 1;
                    }
                    if (distX > 0 && distY < 0)    // Angle line moving NorthEast
                    {
                        console.log('NE');
                        distX = distX - 1;
                        distY = distY + 1;
                    }
                    if (distX < 0 && distY < 0)    // Angle line moving NorthWest
                    {
                        console.log('NW');
                        distX = distX + 1;
                        distY = distY + 1;
                    }
                }
           }

    // A single line providing the move to be made: N NE E SE S SW W or NW
//    console.log('SE');
}
