    #include <bits/stdc++.h>
    using namespace std;

    int main () {
        int n; cin >> n; 
        vector <int> a(n); 
        int max = INT_MIN; 
        int loc = 0; 

        for (int i = 0; i < n; i++) cin >> a[i]; 

        for (int i = 0; i < n; i++) {
            if (a[i] > max) {
                max = a[i]; 
                loc = i; 
            }
        }


        cout << max << " " << loc; 

        
        return 0; 
    }

