#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N, D;
    cin >> N >> D;

    int T[109], L[109];

    int max_heavy = INT32_MIN;

    for (int i = 1; i <= N; i++) cin >> T[i] >> L[i];

    for (int k = 1; k <= D; k++) {
        for (int i = 1; i <= N; i++) {
            int heavy = T[i] * (L[i] + k);
            if (heavy > max_heavy) max_heavy = heavy;
        }

        cout << max_heavy << endl;

        max_heavy = INT32_MIN;
    }

    return 0;
}
