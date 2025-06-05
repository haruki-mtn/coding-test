#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n, a, b;
//     cin >> n >> a >> b;
//     vector<int> sq(n);
//     for (int i = 0; i < n; i++) {
//         sq.at(i) = i + 1;
//     }
//     int ans = 0;
//     for (int x : sq) {
//         int sum_i = 0;
//         sum_i += x / 10000;
//         sum_i += (x % 10000) / 1000;
//         sum_i += ((x % 10000) % 1000) / 100;
//         sum_i += (((x % 10000) % 1000) % 100) / 10;
//         sum_i += (((x % 10000) % 1000) % 100) % 10;

//         if (sum_i >= a && sum_i <= b) {
//             ans += x;
//         }
//     }
//     cout << ans << '\n';
//     return 0;
// }
int calc(int);

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int num = 1; num <= n; num++) {
        int sum = calc(num);
        if (sum >= a && sum <= b) {
            ans += num;
        }
    }
    cout << ans << '\n';
    return 0;
}

int calc(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}