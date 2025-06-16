#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> grid(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid.at(i).at(j);
        }
    }

    vector<int> dx = {-1, 0, 1};
    vector<int> dy = {-1, 0, 1};

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid.at(i).at(j) == '#') continue;
            // 近傍の地雷を探索
            int cnt = 0;
            for (auto &dy : dy) {
                for (auto &dx : dx) {
                    if (dy == 0 && dx == 0) continue;
                    int y = i + dy;
                    int x = j + dx;
                    if (y < 0 || y >= h || x < 0 || x >= w) continue;
                    if (grid.at(y).at(x) == '#') {
                        cnt++;
                    }
                }
            }
            // 近傍の地雷の個数をchar型でgridに格納
            grid.at(i).at(j) = (char)('0' + cnt);
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            j == w - 1 ? cout << grid.at(i).at(j) << '\n' : cout << grid.at(i).at(j);
        }
    }
    return 0;
}