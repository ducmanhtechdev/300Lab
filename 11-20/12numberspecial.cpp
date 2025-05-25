#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n; 

    int firstNum = n / 10;  // result1; 
    int lastNum = 0; 

    int mid  = firstNum % 10; 

    if ( mid * 10 == 0) {
        cout << firstNum << " " << "0" << n % 10; 
        return 0; 
    }
    

     lastNum = mid * 10 +  n % 10; 
   cout << firstNum << " " <<  lastNum; 
     
    return 0; 
}