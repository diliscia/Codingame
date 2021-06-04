/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

var inputs = readline().split(' ');
const W = parseInt(inputs[0]); // width of the building.
const H = parseInt(inputs[1]); // height of the building.
const N = parseInt(readline()); // maximum number of turns before game over.
var inputs = readline().split(' ');
var X0 = parseInt(inputs[0]);
var Y0 = parseInt(inputs[1]);
var X1 = 0;  // minimum value of x in where the bomb might be 
var Y1 = 0; // minimum value of y in where the bomb might be
var X2 = W; // maximum value of x in where the bomb might be
var Y2 = H; // maximum value of y in where the bomb might be

// game loop
while (true) {
    const bombDir = readline(); // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
    if (bombDir.includes("U")) { // if the bomb is Up the maximum value of y is y0
        Y2 = Y0;
    }
    if (bombDir.includes("D")) { // if the bomb is Down the minimum  value of y is y0
        Y1 = Y0;
    }    
    if (bombDir.includes("L")) { // if the bomb is to the Left the maximum value of x is x0
        X2 = X0;
    }
    if (bombDir.includes("R")) { // if the bomb is to the Right the minimum value of x is x0
        X1 = X0;
    }

    X0 = X1 + Math.floor((X2  - X1)/2);    // coordinate x of the next window Batman should jump to
    Y0 = Y1 + Math.floor((Y2  - Y1)/2);    // coordinate y of the next window Batman should jump to

    // Write an action using console.log()
    // To debug: console.error('Debug messages...');
    // the location of the next window Batman should jump to.
    console.log(X0 + ' ' + Y0);
}
