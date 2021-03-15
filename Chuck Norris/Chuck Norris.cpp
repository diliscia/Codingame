#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset> 

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);
    string ANSWER = ""; // answer of message translated in unary
    string IN_BINARY = "";  // message translated in binary
    string CHAR_BINARY = "";  // character translated in binary
    for (int i = 0; i < MESSAGE.length(); i++){
        CHAR_BINARY = (bitset<7> (MESSAGE[i])).to_string(); // translating at binary 7 bits
        if (CHAR_BINARY.length() < 7) {
            CHAR_BINARY = ' ' + CHAR_BINARY;
        }
        IN_BINARY = IN_BINARY + CHAR_BINARY;  // adding each character in binary  
    }
    if (IN_BINARY.length() > 1) {
        for (int i = 0; i < IN_BINARY.length(); i++) { // repeat for all numbers at IN_BINARY
            if (i == 0) {   // operations for the start if the characcter is '1' or '0'
                if (IN_BINARY[i] == '1') {
                    ANSWER = ANSWER + "0 0";
                }
                else if (IN_BINARY[i] == '0') ANSWER = ANSWER + "00 0";
            }
            else if (i > 0) { // operations for the rest of the characters, comparing to the previos one
                if (IN_BINARY[i-1] == '1' and IN_BINARY[i] == '1')
                    ANSWER = ANSWER + "0";
                else if (IN_BINARY[i-1] == '0' and IN_BINARY[i] == '1')
                    ANSWER = ANSWER + " 0 0";
                else if (IN_BINARY[i-1] == '1' and IN_BINARY[i] == '0')
                    ANSWER = ANSWER + " 00 0";
                else if (IN_BINARY[i-1] == '0' and IN_BINARY[i] == '0')
                    ANSWER = ANSWER + "0";
            }
        }
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << ANSWER << endl;
}
