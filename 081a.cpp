#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        if (s.at(i) == '1') {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}