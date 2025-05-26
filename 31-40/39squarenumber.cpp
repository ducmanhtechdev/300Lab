#include <bits/stdc++.h>
using namespace std;

bool isSquareNumber (int n) {
    int i = sqrt(n); 
    int num = i * i; 
if (num == n) {
    cout << "Yes"; 
    return true; 
}
cout << "No"; 
return false; 
}
int main () {
    int n; cin >> n; 
    isSquareNumber(n); 
    
    return 0; 
}