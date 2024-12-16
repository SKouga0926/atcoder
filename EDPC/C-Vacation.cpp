#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int N;
int a[100009][3];
int dp[100009][3];

// dp[i][]

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> a[i][0] >> a[i][1] >> a[i][2];

    // 動的計画法
    for (int i = 1; i <= N; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++) {
                if (j == k) continue;
                chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
            }

    // 答え
    long long res = 0;
    for (int j = 0; j < 3; ++j) chmax(res, dp[N][j]);
    cout << res << endl;
    
    return 0;
}
