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
    int i  = 0; 
    int x; 
    int sum = 0; 



    bool check = false; 

    while (cin >> x) {
        a.push_back(x); 
       if (cin.peek() == '\n') break;
        }

        
    

        for (int i = 0; i < a.size(); i++) {
            if (isPrime(a[i])) {
                check = true; 
                cout << a[i] << " "; 
                sum+=a[i]; 
            }
        }


        if (!check) {
            cout << "-"; 
        }
      


        cout << endl;

        cout << sum; 

    return 0; 
}