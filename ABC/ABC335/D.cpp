#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N;
    cin >> N;

    int grid[45][45];

    // 未到達：0
    // 高橋：-1
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) {
            grid[i][j] = 0;
        } 

    grid[(N + 1) / 2][(N + 1) / 2] = -1;

    int next_x = 0, next_y = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int k = 0;
    int count = 0;

    while (true) {

        count++;

        if (next_x + 1 == N)

        if (grid[next_x][next_y] == -1) break;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j] << " ";
        } 

        cout << endl;
    }

    return 0;
}
