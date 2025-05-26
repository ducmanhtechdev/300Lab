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
   int m, n; cin >> m >> n; 
   bool flag = false; 
   for (int i = m; i <= n; i++) {
    if (isPrime(i)) {
        flag = true; 
        cout << i << " "; 
    }
   }


   if (!flag) {
    cout << "-"; 
   }

    return 0; 
}