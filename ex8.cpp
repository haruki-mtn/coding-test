#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, price, n;
    cin >> p;
    if (p == 1) {
        cin >> price >> n;
        cout << price * n << '\n';
    } else if (p == 2) {
        string text;
        cin >> text >> price >> n;
        cout << text << "!" << '\n';
        cout << price * n << '\n';
    }
    return 0;
}