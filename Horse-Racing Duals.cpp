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
    vector<int> P;
    int minDif = 10000000;
    int N;
    
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        P.push_back(Pi);
    }
    sort(P.begin(), P.begin()+N);
 
    for (int j = 0; j < N-1; j++) {
        if (P[j+1] - P[j] < minDif) {
            minDif = P[j+1] - P[j];
        }
    }

    cout << minDif << endl;
}
