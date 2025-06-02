#include <bits/stdc++.h>
using namespace std;

int main () {

 vector <int> a;
    int x; 
    int sum = 0; 
    int cnt = 0; 
    int max = INT_MIN; 
    bool check = false; 
    while (cin >> x) {
        a.push_back(x); 
        if (cin.peek()  == '\n') break;
    }
    

    for (int i = 0; i < a.size(); i++) {
        int x = sqrt(a[i]); 
        if (x * x == a[i]) {
            check  = true; 
            sum+=a[i]; 
            cnt++; 
        }
    }

    if(!check) {
        cout << "-"; 
        return 0; 
    }

    cout << setprecision(1) << fixed << (double) sum / cnt; 


    return 0; 
}