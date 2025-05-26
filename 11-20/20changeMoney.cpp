#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> count(10);  // mang dem; 
    int money; cin >> money;  // nhap so tien


    // khi tien > 0 (kh am )
    while (money > 0) {
        // dem co bao nhieu lan 5000 duoc doi
        if (money - 5000 >= 0) {
            money-=5000; 
            count[5]++; 
        }
         // dem co bao nhieu lan 2000 duoc doi
        else if (money - 2000 >= 0) {
            money-=2000; 
            count[2]++;
        } // dem co bao nhieu lan 1000 duoc doi
        else {
            money-=1000; 
            count[1]++; 
        }
    }
    cout << count[5] << " " << count[2] << " " << count[1]; 
    
    return 0; 
}