#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }
    bool ans = false;
    for (int i = 1; i <= 4; i++) {
        if (data.at(i - 1) == data.at(i)) {
            ans = true;
        }
    }
    if (ans) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}
