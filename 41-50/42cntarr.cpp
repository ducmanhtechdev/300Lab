#include <bits/stdc++.h>
using namespace std;

int main () {
    

    int n; cin >> n; 
    int cnt  = 0; 

    for (int i = 0; i < n; i++) {
        int check; cin >> check; 

        if (check > 0) cnt++; 
    }



    cout << cnt; 
    return 0; 
}