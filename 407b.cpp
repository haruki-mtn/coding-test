#include <bits/stdc++.h>
using namespace std;

int absolute(int, int);

int main() {
    int x, y;
    cin >> x >> y;
    int event = 0;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i + j >= x || absolute(i, j) >= y) {
                event++;
            }
        }
    }
    cout << fixed << setprecision(10);
    cout << (double)event / 36 << '\n';
    return 0;
}

int absolute(int a, int b) {
    if (a > b) {
        return a - b;
    } else {
        return b - a;
    }
}