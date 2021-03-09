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
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    int dif = 5526; // Max difference to start
    int dif2 = 0;   // difference calculate to compare
    int result = 0; // the value of the result
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; 
        cin.ignore();
        dif2 = abs(t-0);    // calculate absolute difference to reference
        if (dif2 < dif) {   // if is inferior 
            dif = dif2;     // keep this difference
            result = t;     // keep this temperatue
        }
        if (dif2 == dif & t > result) { // for the case where the difference is the same
            result = t;                 // we keep only the positive temperature
        }
            
    }
    
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << result << endl;
}
