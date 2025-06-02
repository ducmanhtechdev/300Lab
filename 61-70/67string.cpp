#include <bits/stdc++.h>
using namespace std;

int main () {
    int i = 0; 
    int k = 0; 
    string s; getline(cin, s); 
 
   
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == ' '){
            k  = i; 
        }
    }

 
for (int i = 0; i < k - 1; i++) {
    cout << s[i]; 
}
    return 0; 
}