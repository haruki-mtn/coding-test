#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i <= a.at(n - 1); i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i <= a.at(j)) {
                cnt++;
            }
            if (i <= cnt) {
                ans = i;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}