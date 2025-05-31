#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    vector<int> ans;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            ans.push_back(a.at(i));
            continue;
        }
        if (a.at(i - 1) != a.at(i)) {
            ans.push_back(a.at(i));
        }
    }

    int m = ans.size();
    cout << m << '\n';
    for (int i = 0; i < m; i++) {
        if (i == m - 1) {
            cout << ans.at(i) << '\n';
        } else {
            cout << ans.at(i) << ' ';
        }
    }
    return 0;
}