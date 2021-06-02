#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();
    int X1 = 0;  // minimum value of x in where the bomb might be 
    int Y1 = 0; // minimum value of y in where the bomb might be
    int X2 = W; // maximum value of x in where the bomb might be
    int Y2 = H; // maximum value of y in where the bomb might be

    // game loop
    while (1) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();
        if (bombDir.find('U') != std::string::npos) // if the bomb is Up the maximum value of y is y0
            Y2 = Y0;
        if (bombDir.find('D') != std::string::npos) // if the bomb is Down the minimum  value of y is y0
            Y1 = Y0;
        if (bombDir.find('L') != std::string::npos) // if the bomb is to the Left the maximum value of x is x0
            X2 = X0;
        if (bombDir.find('R') != std::string::npos) // if the bomb is to the Right the minimum value of x is x0
            X1 = X0;

        X0 = X1 + (X2  - X1)/2;    // coordinate x of the next window Batman should jump to
        Y0 = Y1 + (Y2  - Y1)/2;    // coordinate y of the next window Batman should jump to

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        // the location of the next window Batman should jump to.
        cout << X0 << " " << Y0 << endl;
    }
}
