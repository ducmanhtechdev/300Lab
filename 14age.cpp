#include <bits/stdc++.h>
using namespace std;

int main () {

    int age ; cin >> age; 


    if (age > 50) {
        cout << "Lao nien"; 
    }
    else 
    if (age > 25) {
        cout << "Trung nien";
    }
    else if (age >11) {
        cout << "Thieu nien"; 
    }
    else if (age > 0) {
        cout << "Thieu nhi"; 
    }
 

    
    return 0; 
}
