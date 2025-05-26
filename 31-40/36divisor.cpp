#include <bits/stdc++.h>
using namespace std;

int main () {

    int m, n; cin >> m >> n; 

    int max = 0; 

    for (int i = 1; i <= n; i++) {
        if  ( m % i == 0 && n % i == 0) {
            if (i > max) {
                max = i; 
            }
        }
    }

    cout << max; 
    
    return 0; 
}