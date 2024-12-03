#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    int H, W;
    int N;

    // 入力
    cin >> H >> W >> N;

    char grid[109][109];
    for (int i = 0; i < H; i++)
        for (int j = 0; j < W; j++) {
            grid[i][j] = '.';
        }

    int pos_i = 0; 
    int pos_j = 0;

    int di[4] = {-1, 0, 1, 0};
    int dj[4] = {0, 1, 0, -1};

    int direction = 0;

    for (int i = 0; i < N; i++) {
        if (grid[pos_i][pos_j] == '.') {
            grid[pos_i][pos_j] = '#';

            // 時計回り90度回転
            direction = (direction + 1) % 4;
        }

        else if (grid[pos_i][pos_j] == '#') {
            grid[pos_i][pos_j] = '.';

            // 反時計回り90度回転
            direction = (direction + 3) % 4;
        }

        if ((pos_i + di[direction]) == -1) pos_i = H - 1;
        else pos_i = (pos_i + di[direction]) % H;

        if ((pos_j + dj[direction]) == -1) pos_j = W - 1;
        else pos_j = (pos_j + dj[direction]) % W;
    }

    // 結果出力
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
