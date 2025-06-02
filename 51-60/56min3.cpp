#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    string line;

    // Đọc từng dòng đến EOF
    while (getline(cin, line)) {
        if (line.empty()) continue;  // Bỏ qua dòng trống (nếu có)
        stringstream ss(line);
        int x;
        if (ss >> x) {
            s.insert(x);
        }
        // Nếu dòng không phải số thì bỏ qua luôn, theo đề bài không rõ xử lý
    }

    if ((int)s.size() < 3) {
        cout << "-";
    } else {
        auto it = s.begin();
        advance(it, 2);
        cout << *it;
    }
    
    return 0;
}
