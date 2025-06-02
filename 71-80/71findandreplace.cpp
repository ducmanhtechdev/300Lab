#include <bits/stdc++.h>
using namespace std;


int main () {
    string s1,s2,s3; 
    getline(cin, s1);    
    getline(cin, s2);
    getline(cin, s3);


    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++){
            if (s1[i] == s2[j]) {
                // myname
                //n  -> 2; 
                //mo   -> mymoame
                for (int k = i; k <  k + s3.size(); k++) {
                    s1[k] = s3[k]; 
                }
            }
        }
    }

    
    for(int i = 0; i < s1.size() ; i++) {
        cout << s1[i]; 
    }
   
   
    
    return 0; 
}