#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b,c; cin >> a >> b >> c; 

    // chu vi 

    double cv = a + b + c; 
// 1/2 cv
    double p = cv / 2.0; 
// dien tich
    double s=sqrt(p*(p-a)*(p-b)*(p-c)); 

    cout << setprecision(1) << fixed << cv << ' '; 

    cout << setprecision(3) << fixed << s; 

    return 0; 
}