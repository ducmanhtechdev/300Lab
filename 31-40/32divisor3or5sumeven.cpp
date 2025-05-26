#include <bits/stdc++.h>
using namespace std;
//  cách 1: công thức toán học
vector <int> cnt(16); 
int main () {

    int m, n; cin >> m >> n; 
    cnt[3] = ( n / 3) - (m - 1) / 3;  // số lượng số chia hết cho 3;
    cnt[5] = (n / 5) - (m - 1) / 5; // số lượng số chia hết cho 5;
    cnt[15] = (n / 15) - (m - 1) / 15; // số lượng số chia hết cho 15;
    cnt[1] = cnt[3] + cnt[5] - cnt[15]; // số lượng số chia hết cho 3 hoặc 5; 



    // sum k:===. k * ( m * (m + 1)) / 2; 

    int a = (m / 2) * 2; // số đầu tiên chia hết cho 2; 
    int b = (n / 2) * 2; // số cuối cùng chia hết cho 2; 
    int cnt2 = (b - a) / 2; 

    int sum = cnt2 / 2 * (a + b); 


  

 cout << cnt[1]  << " " << sum; 
    return 0; 
 }



 // cách 2;  for
#include <bits/stdc++.h>
using namespace std;

int main () {

    int m, n; cin >> m >> n; 
    int cnt = 0; 
    int sum = 0;

    for (int i = m ; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
         cnt++; 
        }

        if (i % 2 == 0) sum+=i; 
    }
    cout << cnt << " " <<  sum; 
    
    return 0; 
}



