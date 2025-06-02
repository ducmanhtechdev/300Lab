#include <bits/stdc++.h>
using namespace std;

int main () {
    int i = 0; 
    int k = 0; 
    string s; getline(cin, s); 
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' '){
            cout << s[i]; 
        }
    if (s[i] == ' ' && s[i - 1] != ' ' && i > 0){
    cout << s[i]; 
    }

    }
    // duyẹt chuoi
  
    return 0; 
}