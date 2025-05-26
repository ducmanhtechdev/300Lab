#include <bits/stdc++.h>
using namespace std;

int main () {
    int nodeMotobike; cin >> nodeMotobike; 
    int sum = 0; 

while (nodeMotobike > 0) {
sum+= (nodeMotobike % 10); 
nodeMotobike/=10; 
}


sum%=10; 

cout << sum  << "\n"; 
if (sum == 9) cout << "may man"; 
else cout << "chua may man"; 
    return 0; 
}