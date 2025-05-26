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
    double sum = 0;
    double cnt = 0;  
    bool check = false; 
    for (int i = m; i <= n; i++) {
      if (isPrime(i)) {
         sum+=i; 
         cnt++; 
         check = true; 
      }
    }

    if (!check) {
        cout << "-"; 
    }
    else {
    double result = sum / cnt; 
    cout << setprecision(2) << fixed << result; 
    }

   

  
    
    
    return 0; 
}

