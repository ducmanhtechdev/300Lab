#include <bits/stdc++.h>
using namespace std;

int main () {

    
    int n; cin >> n; 
    vector<int> a(n); 
    int x; cin >> x; 
    bool check = false; 


    for (int i = 0; i < n; i++) cin >> a[i]; 

    for (int i = 0; i < n;i++) {
        if (a[i] == x) {
            cout << "Yes" << "\n";
            cout << i; 
            check = true; 
            return 0; 
        }
    }

    if (!check) {
        cout << "No"; 
    }

    
    return 0; 
}