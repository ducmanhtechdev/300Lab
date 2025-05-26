#include <bits/stdc++.h>
using namespace std;
// cách 1 if else; 
int main () {

    int kw; cin >> kw; 
    int money = 0; 

    if (kw <= 50) {
        money = kw * 600;
    }
    else if (kw <= 100) {
        money = 50 * 600 +  (kw - 50) * 800; 
    }
    else if(kw <= 200) {
        money= 50 * 600 + 50 * 800 +   (kw - 100) * 1100; 
    }
    else {
        money= 50 * 600 + 50 * 800 + 100 * 1100 +  (kw - 200) * 1500; 
    }
    cout << money; 
   
    return 0; 
}

// cách 2: đệ quy 
#include <bits/stdc++.h>
using namespace std;

int recuElecMoney (int kw) {
    if (kw == 0) return 0; 
    if (kw <= 50) return 600 + recuElecMoney(kw - 1); 
    if (kw <= 100) return 800 + recuElecMoney(kw - 1); 
    if (kw <= 200) return 1100 + recuElecMoney(kw -1); 
    return 1500 + recuElecMoney(kw - 1); 
}
int main () {
    
    int kw; cin >> kw; 

    cout << recuElecMoney(kw); 
   
    return 0; 
}