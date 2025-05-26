#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> count(10); 
    int money; cin >> money; 

    while (money > 0) {
        if (money - 5000 >= 0) {
            money-=5000; 
            count[5]++; 
        }
        else if (money - 2000 >= 0) {
            money-=2000; 
            count[2]++;
        }
        else {
            money-=1000; 
            count[1]++; 
        }
    }
    cout << count[5] << " " << count[2] << " " << count[1]; 
    
    return 0; 
}