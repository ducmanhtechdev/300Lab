#include <bits/stdc++.h>
using namespace std;

int main () {
// const pi; 
    double pi = 3.14; 
// nhap r
    int r; cin >> r; 
// chu vi
    double cv = r * 2 * pi; 
// dien tich
    double s = r * r * pi; 


    cout << fixed << setprecision(2) << cv << " "; 
    cout << fixed << setprecision(2) << s; 
    
    return 0; 
}
