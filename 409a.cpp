#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string t, a;
    cin >> n >> t >> a;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (t.at(i) == 'o' && a.at(i) == 'o') {
            flag = true;
        }
    }
    if (flag) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}