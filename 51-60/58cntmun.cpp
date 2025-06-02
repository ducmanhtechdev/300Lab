#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 
    vector <int> a(n);
   unordered_map <int, int> cnt;  
// đánh dấu lại số lần xuất hiện của phần tử trong mảng; 

for (int i = 0; i < n; i++) cin >> a[i]; 


for (int i = 0; i < n; i++) cnt[a[i]]++; 

for (int i = 0; i < n; i++) {
    if (cnt[a[i]]  != 0) {
        cout << a[i]  << " " << cnt[a[i]] << endl; 
        cnt[a[i]] = 0; 
    }
}




return 0;
}

