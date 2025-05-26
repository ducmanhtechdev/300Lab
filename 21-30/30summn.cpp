#include <bits/stdc++.h>
using namespace std;
// sum 1 -> n =>  n * (n + 1) / 2; 
// sum (m -> n) n * (n + m) / 2; 
// 6 7 8; 
// Tính tổng bằng công thức cấp số cộng:
// S = (n - m + 1) * (m + n) / 2
// trong đó:
// - (n - m + 1) là số lượng phần tử
// - (m + n) là tổng hai đầu m và n
// - chia 2 để ra trung bình nhân với số lượng
int main () {
    int m, n; cin >> m >> n; 
    int sum = (n - m + 1) * (n + m) / 2; cout << sum;  // S = (n - m + 1) * (m + n) / 2
    return 0; 
}


// cách 2; vòng lặp
#include <bits/stdc++.h>
using namespace std;
int main () {

    int sum = 0; 
    int m, n; cin >> m >> n; 

    for (int i = m; i <= n; i++) {
        sum+=i; 
    }

    cout << sum; 
}
