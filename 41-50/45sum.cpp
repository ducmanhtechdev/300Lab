#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    bool check = false; 
    for(int i = 0; i < n; i++){
        if( arr[i] % 2 == 0){
            sum+=arr[i];
            check = true; 

        }
    }
 

    if (!check){
        cout << "-";
    }
    else {
        cout << sum; 
    }

    return 0;
}