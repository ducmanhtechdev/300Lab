#include <bits/stdc++.h>
using namespace std;

int main () {

    int t, m; cin >> t >> m; 

    int tmax  = 0; 

    if (t > m) tmax = t; 
    else tmax = m; 

    int max = 0; 




    for (int i = 1; i <= tmax; i++) {
        if  ( m % i == 0 && t % i == 0) {
            if (i > max) {
                max = i; 
            }
        }
    }


    t/=max; 
    m/=max; 


    cout << t << "/" << m; 


    return 0; 
}
