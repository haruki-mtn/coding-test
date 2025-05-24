#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;
    int ans1 = ++x;
    cout << ans1 << '\n';

    int ans2 = ans1 * (a + b);
    cout << ans2 << '\n';

    int ans3 = ans2 * ans2;
    cout << ans3 << '\n';

    int ans4 = --ans3;
    cout << ans4 << '\n';
    return 0;
}