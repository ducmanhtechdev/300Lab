#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n; 
    vector <int> a(n); 
    int sum = 0; 
    for (int i = 0; i < n; i++) cin >> a[i]; 
    for (int i  = 0; i < n; i++) {
        if ( i % 2 == 0) {
          
            sum+=a[i]; 
        }
    }
    cout << sum; 
    return 0; 
}