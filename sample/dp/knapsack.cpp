#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    // 初期変数
    int n, W;
    int weight[110], value[110];

    // DPテーブル
    int dp[110][10010];

    // 入力cin >> n >> W;
    for (int i = 0; i < n; ++i) cin >> value[i] >> weight[i];

    // DP初期条件: dp[0][w] = 0
    for (int w = 0; w <= W; ++w) dp[0][w] = 0;cin >> n >> W;
    
    
    return 0;
}
