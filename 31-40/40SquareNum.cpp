#include <bits/stdc++.h>
using namespace std;


bool isSquareNumber (int n) {
    int i = sqrt(n); 
    int num = i * i; 
if (num == n) {
   
    return true; 
}

return false; 
}

int main () {
    int n; cin >> n; 
    int cnt = 0; 
    int i = 0; 
    while (i < n) {
        if (isSquareNumber(cnt)) {
            cout << cnt << " "; 
            i++;
        }
        cnt++;  
    }
    
    return 0; 
}