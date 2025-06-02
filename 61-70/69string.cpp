#include <bits/stdc++.h>
using namespace std;

int main () {
    int i = 0; 
    int k = 0; 
    string s; getline(cin, s); 
    int cnt = 0; 
 
    for (int i = 0; i < s.size(); i++) {
    if (s[i] == ' ' && s[i - 1] != ' ' && i > 0){
        cnt++; 
    }
    }
    cout << cnt; 
  
    return 0; 
}