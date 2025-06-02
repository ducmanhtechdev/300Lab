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
    vector <int> a;
    int x; 
    int max = INT_MIN; 
    while (cin >> x) {
        a.push_back(x); 
        if (cin.peek()  == '\n') break;
    }
   
    bool check = false; 
    for (int i = 0; i < a.size(); i++) {
      if (isPrime(a[i])) {
        if (a[i] > max) {
            check  = true; 
            max = a[i]; 
        }
      }
    }

    if (!check) {
        cout << "-"; 
        return 0; 
    }
  

    cout << max; 

   

  
    
    
    return 0; 
}

