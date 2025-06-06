#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d.at(i);
    }
    sort(d.begin(), d.end());
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (i == 0 || d.at(i - 1) != d.at(i)) {
            ans.push_back(d.at(i));
        }
    }
    cout << ans.size() << '\n';
    return 0;
}