#include <bits/stdc++.h>
using namespace std;

int main () {
    int i = 0; 
    int k = 0; 
    string s; getline(cin, s); 
    
 s[0] = toupper(s[0]); 
for (int i = 0; i < s.size(); i++) {
    if (s[i] == ' ' && s[i + 1] != ' ' && i < s.size()){
       s[i + 1] = toupper(s[i + 1]); 
    }
}



for (int i = 0; i < s.size(); i++) {
    cout << s[i]; 
}
     
  
    return 0; 
}