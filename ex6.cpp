#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;

    if (op == '+') {
        cout << a + b << '\n';
    } else if (op == '-') {
        cout << a - b << '\n';
    } else if (op == '*') {
        cout << a * b << '\n';
    } else if (op == '/' && b != 0) {
        cout << a / b << '\n';
    } else {
        cout << "error" << '\n';
    }
    return 0;
}