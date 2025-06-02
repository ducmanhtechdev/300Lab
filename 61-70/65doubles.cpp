#include <bits/stdc++.h>
using namespace std;

int main () {

    bool flag = true; 
    string s; 
    getline(cin, s); 

    int k = s.size() / 2;
    //[2]

for (int i = 0; i < s.size() / 2; i++) {
    if (s[i] != s[s.size() - 1 - i]) {
        flag = false;
        break;
    } 
}



    if (flag) cout << "Yes"; 
    else cout << "No"; 
    
    return 0; 
}