#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> t(n + 1);
    for (int i = 0; i < n + 1; i++) {
        if (i == 0) {
            t.at(0) = 0;
            continue;
        }
        cin >> t.at(i);
    }
    bool awake = true;
    for (int i = 1; i < n + 1; i++) {
        if (t.at(i) - t.at(i - 1) > (s + 0.5)) {
            awake = false;
            break;
        }
    }
    if (awake) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}