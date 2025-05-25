#include <bits/stdc++.h>
using namespace std;

int main () {
    int apple, students;
    cin >> apple >> students; 

    int result = apple / students;   // so tao cho moi nguoi 
    int appleMod = apple % students; // so tao du 
    cout << result << " " << appleMod; 
    return 0; 
}