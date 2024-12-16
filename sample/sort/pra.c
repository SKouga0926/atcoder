#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

    // 初期変数
    int n, m, l;
    int a[19], b[39], c[39];
    int p[459], q[459];

    // 入力
    cin >> n >> m >> l;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    for (int i = 1; i <= m; i++) cin >> c[i];
    for (int i = 1; i <= l; i++) cin >> p[i] >> q[i];

    // 必要変数
    int s[19][39];
    int r[19][39];

    int d[19][19];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            for (int k = 1; k <= l; k++) if (p[k] == i && q[k] == j) {
                d[i][j] = -1;
                continue;
            }

            s[i][j] = a[i] / (1.0 * b[j]);

            if (0 < s[i][j] && s[i][j] < 1) r[i][j] = c[j] * s[i][j];
            else if (s[i][j] >= 1) r[i][j] = c[j] * ((s[i][j]- 1) / 10.0 + 1);

            d[i][j] = floor(r[i][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            d[i][j]


        }

  
  return 0;
}
