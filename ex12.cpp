#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == '+') {
            ans++;
        } else if (s.at(i) == '-') {
            ans--;
        } else {
            continue;
        }
    }
    cout << ans << '\n';
    return 0;
}