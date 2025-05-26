#include <bits/stdc++.h>
using namespace std;

int main () {
    
    int kilometer; cin >> kilometer; 
    int money  = 0; 
// km == 1
    if (kilometer == 1) money = kilometer * 12000; 
// km <=30
    if (kilometer <= 30) money = 1 * 12000 + (kilometer - 1) * 10000; 
// km>30
    if (kilometer > 30) money = 1 * 12000 + 29 * 10000 + (kilometer - 30) * 9000; 



 

    cout << money; 
    return 0; 
}