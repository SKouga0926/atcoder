#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    int N;
    int q[109];
    int r[109];
    int Q;
    int t[109];
    int d[109];

    cin >> N;
    for (int i = 1; i <= N; i++) cin >> q[i] >> r[i];
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> t[i] >> d[i];

    for (int j = 1; j <= Q; j++) {
        int gather_day = d[j] % q[t[j]];

        // ゴミが出た当日，収集される場合
        if (gather_day == r[t[j]]) {
            cout << gather_day << endl;
            continue;
        }

        int day = 1;
        int day_temp;

         // 次にゴミが収集される場合
        while (true) {
            day_temp = d[j] + day;
            day++;

            if ((day_temp % q[t[j]]) == r[t[j]]) {
                cout << day_temp << endl;
                break;
            }
        }
    }

    return 0;
}
