#include <cstring>
#include <iostream>
using namespace std;

char a[77][77];
bool mk[77][77];
int minstep, w, h;
int endX, endY;

void search(int nowX, int nowY, int step, int lastD) {
    int dx[4]{0, -1, 0, 1};
    int dy[4]{1, 0, -1, 0};
    if (step > minstep) return;
    for (int d = 0; d <= 3; d++) {
        int x{nowX + dx[d]};
        int y{nowY + dy[d]};
        if (x == endX && y == endY && a[y][x] == 'X') {
            minstep = min(minstep, step + (lastD != d));
            return;
        }
        if (x < 0 || x > w + 1 || y < 0 || y > h + 1 || a[y][x] == 'X' || mk[y][x]) continue;
        mk[y][x] = true;
        search(x, y, step + (lastD != d), d);
        mk[y][x] = false;
    }
}

int main() {
    int boardnum{0};
    while (cin >> w >> h, w) {
        boardnum++;
        cout << "Board #" << boardnum << ':' << endl;
        for (int i = 1; i <= h; i++) {
            cin.ignore();
            for (int j = 1; j <= w; j++) {
                cin.get(a[i][j]);
            }
        }

        for (int i = 0; i <= w; i++) {
            a[h + 1][i] = a[0][i] = ' ';
        }
        for (int i = 0; i <= h; i++) {
            a[i][w + 1] = a[i][0] = ' ';
        }
        int beginX, beginY, count = 0;
        while (cin >> beginX >> beginY >> endX >> endY, beginX) {
            count++;
            minstep = 10000;
            memset(mk, 0, sizeof(mk));
            search(beginX, beginY, 0, -1);
            if (minstep < 10000) {
                cout << "Pair " << count << ": " << minstep << " segments." << endl;
            } else {
                cout << "Pair " << count << ": impossible." << endl;
            }
        }
    }
}