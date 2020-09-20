#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

#define PI 3.14159265

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{   
    
    size_t sz;
    string LONA;                // user's longitude in string
    cin >> LONA; cin.ignore();
    double LON_A;               // user's longitude in number
    string LATA;                // user's latitude in string
    cin >> LATA; cin.ignore();
    double LAT_A;               // user's latitude in number
    int N;                      // numbers of defibrilators
    cin >> N; cin.ignore();
    double MIND = 6371.0;       // minimum distance (earth radious by default)
    string delimiter = ";";     // characcter of the delimiter
    string NAME;                // name of the location
    string ANSWER;              
    string LONB;                // location's longitude in string 
    string LATB;                // location's latitude in string
    double LON_B;               // location's longitude in number
    double LAT_B;               // location's latitude in number

        size_t found = LONA.find_first_of(","); // substitution of "," for "." 
        while (found!=std::string::npos)
        {
            LONA[found]='.';
            found=LONA.find_first_of(",",found+1);
        }
        found = LATA.find_first_of(",");    // substitution of "," for "."
        while (found!=std::string::npos)
        {
            LATA[found]='.';
            found=LATA.find_first_of(",",found+1);
        }
    LON_A = stod(LONA); // changing string to double
    LAT_A = stod(LATA);

    for (int i = 0; i < N; i++) {
        string DEFIB;
        getline(cin, DEFIB);
        size_t pos = 0;
        
        pos = DEFIB.find_first_of(delimiter);       // reading the fields
        string num = DEFIB.substr(0, pos);
        DEFIB.erase(0, pos + delimiter.length());
        pos = DEFIB.find_first_of(delimiter);        
        NAME = DEFIB.substr(0, pos);
        DEFIB.erase(0, pos + delimiter.length());
        pos = DEFIB.find_first_of(delimiter);
        string address = DEFIB.substr(0,pos);
        DEFIB.erase(0, pos + delimiter.length());
        pos = DEFIB.find_first_of(delimiter);
        string phone = DEFIB.substr(0,pos);
        DEFIB.erase(0, pos + delimiter.length());
        pos = DEFIB.find_first_of(delimiter);
        LONB = DEFIB.substr(0,pos);
        LATB = DEFIB.substr(pos+1,DEFIB.length());
        DEFIB.erase(0, DEFIB.length());

        found = LONB.find_first_of(",");    // substitution of "," for "."
        while (found!=std::string::npos)
        {
            LONB[found]='.';
            found=LONB.find_first_of(",",found+1);
        }
        found = LATB.find_first_of(",");
        while (found!=std::string::npos)    // substitution of "," for "."
        {
            LATB[found]='.';
            found=LATB.find_first_of(",",found+1);
        }
        LON_B = stod(LONB);
        LAT_B = stod(LATB);
        double X = ((LON_B-LON_A)*cos(((LAT_A+LAT_B)/2)));  // X 
        double Y = ((LAT_B-LAT_A));                        // Y
        double D = (sqrt(pow(X,2)+pow(Y,2)));   // distance
        if (MIND > D) {
            MIND = D;
            ANSWER = NAME;
        }
        else {
            continue;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << ANSWER << endl;
}
