#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> ans(n, vector<char>(n, '-'));
    for (int i = 0; i < m; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
        ans.at(a - 1).at(b - 1) = 'o';
        ans.at(b - 1).at(a - 1) = 'x';
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1) {
                cout << ans.at(i).at(j);
                break;
            }
            cout << ans.at(i).at(j) << ' ';
        }
        cout << '\n';
    }
    return 0;
}