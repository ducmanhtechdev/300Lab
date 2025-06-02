#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n; 
    vector <int> a(n); 
    int sum = 0; 
    for (int i = 0; i < n; i++) cin >> a[i]; 


    for (int i  = 0; i < n; i++) {
        if ( a[i] % 5 == 0) {
            cout << a[i] << " "; 
            sum+=a[i]; 
        }
    }

    cout << endl; 
    cout << sum; 



    
    return 0; 
}