#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, w, sy, sx;
    string s;
    cin >> n >> h >> w >> sy >> sx >> s;
    vector<vector<int>> vec(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> vec.at(i).at(j);
        }
    }

    int nowy = sy - 1, nowx = sx - 1;
    for (int i = 0; i < n; i++) {
        if (s.at(i) == 'F') {
            nowy--;
            cout << vec.at(nowy).at(nowx) << "\n";
        } else if (s.at(i) == 'B') {
            nowy++;
            cout << vec.at(nowy).at(nowx) << "\n";
        } else if (s.at(i) == 'L') {
            nowx--;
            cout << vec.at(nowy).at(nowx) << "\n";
        } else if (s.at(i) == 'R') {
            nowx++;
            cout << vec.at(nowy).at(nowx) << "\n";
        }
    }
    return 0;
}
