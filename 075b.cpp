#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> before(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> before.at(i).at(j);
        }
    }

    vector<vector<char>> after(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int cnt = 0;
            if (before.at(i).at(j) == '.') {
                if (before.at(i - 1).at(j) == '#') {
                    cnt++;
                }
                if (before.at(i - 1).at(j + 1)) {
                    cnt++;
                }
                if (before.at(i).at(j + 1)) {
                    cnt++;
                }
                if (before.at(i + 1).at(j + 1)) {
                    cnt++;
                }
                if (before.at(i + 1).at(j)) {
                    cnt++;
                }
                if (before.at(i + 1).at(j - 1)) {
                    cnt++;
                }
                if (before.at(i).at(j - 1)) {
                    cnt++;
                }
                if (before.at(i - 1).at(j - 1)) {
                    cnt++;
                }
                if (cnt != 0) {
                    after.at(i).at(j) = (char)cnt;
                }
                after.at(i).at(j) = (char)cnt;
            } else {
                after.at(i).at(j) = '#';
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (j == w - 1) {
                cout << after.at(i).at(j) << '\n';
            } else {
                cout << after.at(i).at(j);
            }
        }
    }
    return 0;
}