#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N; // Number of elements which make up the association table.
    cin >> N; cin.ignore();
    int Q; // Number Q of file names to be analyzed.
    cin >> Q; cin.ignore();
    map<string,string> MIMETYPES; 
    for (int i = 0; i < N; i++) {
        string EXT; // file extension
        string MT; // MIME type.
        cin >> EXT >> MT; cin.ignore();
        for (int j = 0; j < EXT.length(); j++)
            EXT[j] = tolower(EXT[j]);
        MIMETYPES.insert({EXT,MT}); // defining the dictionary considering uppercases
    }
    for (int i = 0; i < Q; i++) {
        string FNAME;
        getline(cin, FNAME);    // One file name per line.
        string NAME;    // substring for  the name
        string EXT2;    // substring for  the extension
        string::size_type pos = FNAME.find_last_of('.');    // checking if there is a '.', that means an extension
        if (0 < pos < 256)  {                               // and assigning the last substring as the extension (key)
            if(FNAME.npos != pos) {
                EXT2 = FNAME.substr(pos + 1);
                for (int j = 0; j < EXT2.length(); j++)
                    EXT2[j] = tolower(EXT2[j]);
                if (MIMETYPES.find(EXT2) == MIMETYPES.end())    // if the extension (key) is not present
                    cout << "UNKNOWN" << endl;                  // print that is UNKNOWN
                else                                            // if the extension (key) is present
                    cout << MIMETYPES[EXT2] << endl;            // print the MIME type
        }
        else
            cout << "UNKNOWN"<< endl;    // if there is no '.' print that is UNKNOWN
        }
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
 //   cout << "UNKNOWN" << endl;
}
