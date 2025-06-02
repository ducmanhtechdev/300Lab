#include <bits/stdc++.h>
using namespace std;

int main () {
    string s; getline(cin, s); 
int k = 0; 
int i = 0; 


while(s[i] == ' '){
    k = i; 
    i++; 
}



for (int l = k + 1; i < s.size(); i++) {
cout << s[i];
}
    return 0; 
}