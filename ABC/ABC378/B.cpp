#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    // 初期変数
    int N;
    int r[109], q[109];
    int Q;
    int d[109], t[109];

    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> q[i] >> r[i];
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> t[i] >> d[i];

    // 処理
    for (int j = 1; j <= Q; j++) {

        // ゴミがでる日と収集される日が同じ場合
        if (d[j] % q[t[j]] == r[t[j]]) cout << d[j] << endl;

        else {
            int diff = (r[t[j]] - (d[j] % q[t[j]]) + q[t[j]]) % q[t[j]];
            cout << d[j] + diff << endl;
        }
    }


    return 0;
}
