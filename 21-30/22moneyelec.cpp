#include <bits/stdc++.h>
using namespace std;

int main () {

    int kw; cin >> kw; 
    int money = 0; 

    if (kw <= 50) {
        money = kw * 600;
    }
    else if (kw <= 100) {
        money = 50 * 600 +  (kw - 50) * 800; 
    }
    else if(kw <= 200) {
        money= 50 * 600 + 50 * 800 +   (kw - 100) * 1100; 
    }
    else {
        money= 50 * 600 + 50 * 800 + 100 * 1100 +  (kw - 200) * 1500; 
    }
    

cout << money; 
   
    return 0; 
}