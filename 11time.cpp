#include <bits/stdc++.h>
using namespace std;

int main () {

    int second; cin >> second;  
    

    int hour = second / 3600; 
    int minutes = (second % 3600 ) / 60; 
        second = (second % 3600 % 60); 

    cout << hour << ':' << minutes << ":" << second; 
    
    return 0; 
}
