#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
ll K[29];

int main(void)
{
    ll A = 0;
    ll B = 0;

    ll group_min = __INT32_MAX__;

    // 入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> K[i];

    for (int bit = 0; bit < (1 << N); bit++) {

        for (int i = 0; i < N; i++) {
            if (bit & (1 << i)) {
                A += K[i];
            }

            else {
                B += K[i];
            }
        }

        if (A > B) {
            group_min = min(group_min, A);
        }
        else if (B > A) {
            group_min = min(group_min, B);
        }
        else {
            group_min = min(group_min, A);
        }

        A = 0;
        B = 0;
    }

    cout << group_min << endl;

    return 0;
}
