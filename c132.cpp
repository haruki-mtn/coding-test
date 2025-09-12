#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool ans = true;
    vector<bool> rooms(n, false);

    int cur = 0, cnt = 0;
    
    while (true) {

        // 全ての部屋の掃除が不可能な場合の判定
        if (rooms.at(cur)) {
            ans = false;
            break;
        }

        // 掃除
        rooms.at(cur) = true;
        cnt++;
        // 掃除完了の判定
        if (cnt == n) {
            break;
        }

        // 移動
        int next = cur + m;
        if (next > n - 1) {
            // 左端に戻る場合
            int store = m - ((n - 1) - cur);
            cur = store - 1;
        } else {
            // 単純に右の部屋に移動する場合
            cur = next;
        }
    }

    if (ans) {
        cout << "yes" << '\n';
    } else {
        cout << "no" << '\n';
    }
    return 0;
}