#include <bits/stdc++.h>
using namespace std;

int main () {


int n; cin >> n; 

switch (n)  {
    case 11:
    case 12:
    case 1:
     cout << "Mua Dong"; 
     break;
}
    

for (int i = 2; i <= 4;i++) {
    if (n == i) cout << "Mua Xuan"; 
}



for (int i = 5; i<= 7;i++) {
    if (n == i) cout << "Mua Ha"; 
   
}


for (int i = 8; i<= 10;i++) {
    if (n == i) cout << "Mua Thu"; 
}
    return 0; 
}
