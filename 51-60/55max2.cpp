#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <int> a;
    int x; 
    int max = INT_MIN; 
    while (cin >> x) {
        a.push_back(x); 
        if (cin.peek()  == '\n') break;
    }
   
    bool check = false; 
    for (int i = 0; i < a.size(); i++) {
    
        check = true; 
       if (a[i] > max) {
        max = a[i]; 
       }
    }
    // giá trị lớn thứ nhất:max

int max2 = INT_MIN; 
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > max2 && a[i] != max) {
            max2 = a[i]; 
        }
    }

    if (!check) {
        cout << "-"; 
        return 0; 
    }
    cout << max2; 
    return 0; 
}

