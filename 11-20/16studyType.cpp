#include <bits/stdc++.h>
using namespace std;

int main () {

    int score1, score2; cin >> score1 >> score2; 

    double midscore = (score1 + score2 * 2) / 3.0; 


    cout << setprecision(1) << fixed <<  midscore << "\n"; 
    if (midscore >= 8) {
        cout << "Gioi";
    }
    else if ( midscore >= 6.5) {
         cout << "Kha";
    }
    else if (midscore >= 5) {
        cout << "Trung binh";
    }
    else if (midscore >= 3.5) {
        cout << "Yeu";
    }
    else {
        cout << "Kem"; 
    }

    return 0; 
}
