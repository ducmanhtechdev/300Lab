#include <bits/stdc++.h>
using namespace std;

int main () {
     int n; cin >> n; 
    vector <int> a(n); 
    for (int i = 0; i < n; i++) cin >> a[i]; 
    int d = 0; 
    int m = 0; 

  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
        d++;
    }
    else if (a[i] < 0) {
        m++; 
    }
  }

  

  cout << d << " " << m; 
  cout << endl; 
  bool check1 = false;
  bool check2 = false; 

   for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
        check1 = true; 
       cout << a[i] << " "; 
    }
  }

  if (!check1) {
    cout << "-"; 
  }

  cout << endl; 



  for (int i = 0; i < n; i++) {
    if (a[i] < 0) {
        check2 = true; 
       cout << a[i] << " "; 
    }
  }
 if (!check2) {
    cout << "-"; 
  }

  

    
    return 0; 
}