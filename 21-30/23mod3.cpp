#include <bits/stdc++.h>
using namespace std;

int main () {
    

    int n; cin >> n; 
    int flag = false; 

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            flag = true; 
            cout << i << ' '; 
        }
    }

    if (!flag) {
        cout << "-"; 
    }

    return 0; 
}
