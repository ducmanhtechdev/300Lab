#include <bits/stdc++.h>
using namespace std;

bool isPrime (int n) {
    if (n < 2) return false; 
    for (int i = 2; i <= sqrt(n) ; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}


int main () {


    int n; cin >> n; 
    int i = 0; 
    int tang = 0; 



while (i < n) {


if (isPrime(tang)) {
    cout << tang << " "; 
    i++;
}

tang++; 

}

    return 0; 
}