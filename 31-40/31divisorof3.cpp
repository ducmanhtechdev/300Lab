#include <bits/stdc++.h>
using namespace std;


// cách 1: công thức toán học
int main () {
    int m, n; cin >> m >> n; 
    int cnt = (n / 3) - (m - 1) / 3; 
     cout << cnt; 
    return 0; 
}



// cách 2: for
#include <bits/stdc++.h>
using namespace std;
// cách 1: công thức toán học
int main () {
    int m, n; cin >> m >> n; 
    int cnt = 0; 
    for (int i = m; i<= n; i++) {
        if (i % 3 == 0) {
            cnt++; 
        }
    }

    cout << cnt; 
    return 0; 
}
