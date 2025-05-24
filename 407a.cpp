#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    int ansi = (int)(a / b);
    float ansf = a / b;
    if (ansf - ansi >= 0.5) {
        cout << ansi + 1 << '\n';
    } else {
        cout << ansi << '\n';
    }
    return 0;
}