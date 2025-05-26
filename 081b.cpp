#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    int cnt = 0;
    bool flag = false;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (a.at(i) % 2 != 0) {
                flag = true;
                break;
            }
            a.at(i) /= 2;
        }
        if (flag) {
            break;
        }
        cnt++;
    }

    cout << cnt << '\n';
    return 0;
}