#include <bits/stdc++.h>
using namespace std;

int main () {
    int month; cin >> month; 
    int year; cin >> year; 

    // handle; 

    bool isLeapyear = year % 400 == 0 || (year % 4 == 0 &&  year % 100 != 0); 


    // 1 3 5 7 : 31; 
    // 4 6: 30
    
    for (int i = 1; i <= 7; i++) {
       if (i % 2 == 1) {
        if (month == i) {
            cout << "31"; 
        }
       }
       if (i % 2 == 0) {
        if (month == i && month != 2) {
            cout << "30"; 
        }
       }
    }


    // 8 10 12: 31
    // 9 11: 30

    for (int i = 8; i <= 12 ;i++) {
        if (i % 2 == 0) {
            if (month == i) {
                cout << "31"; 
            }
        }

          if (i % 2 != 0) {
        if (month == i) {
            cout << "30"; 
        }
       }
    }



    if (month == 2) {
            if (isLeapyear) cout << "29"; 
            else cout << "28"; 
        }
    return 0; 
}