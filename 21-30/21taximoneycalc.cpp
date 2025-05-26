#include <bits/stdc++.h>
using namespace std;
// cách 1: if else;
int main () {
    int kilometer; cin >> kilometer; 
    int money  = 0; 
// km == 1
    if (kilometer == 1) money = kilometer * 12000; 
// km <=30
    if (kilometer <= 30) money = 1 * 12000 + (kilometer - 1) * 10000; 
// km>30
    if (kilometer > 30) money = 1 * 12000 + 29 * 10000 + (kilometer - 30) * 9000; 
    cout << money; 
    return 0; 
}




// cách 2: đệ quy
#include <bits/stdc++.h>
using namespace std;
int recuMoneyTaxi(int kilometer) {
    if (kilometer == 0) return 0;  // giá 0 đồng khi đi 0km 
    if (kilometer == 1) return 12000;  // giá 12000 khi đi 1km
    if(kilometer <= 30 ) return   10000 + recuMoneyTaxi(kilometer - 1);  // giá 10000 mỗi km khi đi từ 2km trở lên, cộng dồn 
    return 9000 + recuMoneyTaxi(kilometer - 1); // giá 10000 mỗi km khi đi từ 2km trở lên, cộng dồn 
}
int main () {
    int kilometer; cin >> kilometer; 
    cout << recuMoneyTaxi(kilometer); 
    return 0; 
}