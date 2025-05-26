#include <bits/stdc++.h>
using namespace std;
// isPrime function
bool isPrime (int n) {
    if (n < 2) return false; 
     bool flag = true; 
    for (int i = 2; i <= sqrt(n);i++) {
       
        if (n % i == 0) {
            flag = false; 
        }
    }
    return flag; 
}

int main () {
// isPrime; 
    int n; cin >> n; 
    if (isPrime(n)) {
        cout << "Yes"; 
    }
    else {
        cout << "No"; 
    }
    
    return 0; 
}