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
    int L;  // length of each letter
    cin >> L; cin.ignore();
    int H;  // height of each letter
    cin >> H; cin.ignore();
    string T;   // word to be written in ASCII Art
    getline(cin, T);
    string ALFA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?"; // uppercase alphabet
    vector<string> ASCIIALFA;
    int idx = 0;
    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);
        ASCIIALFA.push_back(ROW);    // registering the ASCII alfabet
    }

    for (int line = 0; line < H; line++) {
        for (int letter = 0; letter < T.size(); letter++){  //  finding index of each letter in the word
            int idx = ALFA.find(toupper(T[letter]));
            if (idx == -1) { 
                idx = (ALFA.size() - 1);
            }
            cout << ASCIIALFA[line].substr(idx*L, L);   // printing the lines
        }
        cout << endl;
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
}
