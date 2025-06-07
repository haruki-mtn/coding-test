#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int ans = 0;
    for (int x = n; x >= 0; x--) {
        int cnt = 0;
        for (auto a : a) {
            if (a >= x) cnt++;
        }
        if (cnt >= x) {
            ans = x;
            break;
        }
    }
    
    cout << ans << '\n';
    return 0;
}