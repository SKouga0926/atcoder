using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

ll H, W, Q;
ll R[400009], C[400009];

bool is_broken[400009][400009] = {false};

int main(void)
{
    // 入力
    cin >> H >> W >> Q;
    for (int i = 1; i <= Q; i++) cin >> R[i] >> C[i];


    // 各クエリ処理
    for (int i = 1; i <= Q; i++) {

        // 上下左右について

        // 上
        for (int j = R[i]; 0 <= j; j--) {
            
            // 壊れてないとき
            if (is_broken[i][j] == false) {
                is_broken[i][j] = true;
                break;
            }

        }

        // 下
        for (int j = R[i]; j <= H; j++) {

            // 壊れてないとき
            if (is_broken[i][j] == false) {
                is_broken[i][j] = true;
                break;
            }

        }

        // 左
        for (int j = C[i]; 0 <= j; j--) {

            // 壊れてないとき
            if (is_broken[i][j] == false) {
                is_broken[i][j] = true;
                break;
            }

        }

        // 右
        for (int j = C[i]; j <= W; j++) {

            // 壊れてないとき
            if (is_broken[i][j] == false) {
                is_broken[i][j] = true;
                break;
            }

        }

    }

    int Answer = 0;

    for (int i = 1; i <= H; i++)
        for (int j = 1; j <= W; j++) {
            if (is_broken[i][j] == true) Answer++;
        }
    
    cout << Answer << endl;

    return 0;
}
