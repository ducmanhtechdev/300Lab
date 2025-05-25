#include <bits/stdc++.h>
using namespace std;

int main () {

    int a,b,c; cin >> a >> b >> c; 
     double cv = a + b + c; 
    double p = cv / 2.0; 

    double s=sqrt(p*(p-a)*(p-b)*(p-c)); 

    double r = (a * b * c) / (4 * s); 
    cout << setprecision(3) << fixed << r; 
    
    return 0; 
}
