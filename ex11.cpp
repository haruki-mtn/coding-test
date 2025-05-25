#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    char op;
    int b;
    for (int i = 0; i < n; i++) {
        cin >> op >> b;
        if (op == '+') {
            a += b;
        } else if (op == '-') {
            a -= b;
        } else if (op == '*') {
            a *= b;
        } else if (op == '/' && b != 0) {
            a /= b;
        } else if (b == 0) {
            cout << "error" << '\n';
            break;
        }
        cout << i + 1 << ":" << a << '\n';
    }
    return 0;
}