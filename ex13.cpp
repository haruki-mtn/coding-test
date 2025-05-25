#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0, ave = 0;
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
        sum += a.at(i);
    }
    ave = sum / n;
    for (int i = 0; i < n; i++) {
        cout << abs(ave - a.at(i)) << '\n';
    }
    return 0;
}