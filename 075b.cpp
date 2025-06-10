#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> board(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> board.at(i).at(j);
        }
    }

    const vector<int> DX = {-1, 0, 1};
    const vector<int> DY = {-1, 0, 1};

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (board.at(i).at(j) == '#') continue;

            int cnt = 0;
            for (int dx : DX) {
                for (int dy : DY) {
                    if (dx == 0 && dy == 0) continue;
                    int x = j + dx;
                    int y = i + dy;
                    if (x >= 0 && x < w && y >= 0 && y < h) {
                        if (board.at(y).at(x) == '#') {
                            cnt++;
                        }
                    }
                }
            }
            board.at(i).at(j) = char('0' + cnt);
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << board.at(i).at(j);
        }
        cout << '\n';
    }
    return 0;
}