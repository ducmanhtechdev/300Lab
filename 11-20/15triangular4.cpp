#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b,c ; cin >> a >> b >> c; 
bool check =  a + b > c && b + c > a && a + c > b; 



if (check) {
    double cv = a + b + c; 
// 1/2 cv
    double p = cv / 2.0; 
// dien tich
    double s=sqrt(p*(p-a)*(p-b)*(p-c)); 

    cout << "Day la 3 canh cua mot tam giac" << "\n"; 
    cout << setprecision(2) << fixed  << cv << " " << setprecision(1) << fixed << s; 
}
else {
    cout << "Day khong phai la 3 canh cua mot tam giac"; 
}


    return 0; 
}