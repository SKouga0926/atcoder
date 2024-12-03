using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

ll N, Q;
string S;

ll X[200009];
char C[200009];

// ハッシュ値を計算するための変数
ll mod = INT32_MAX;
ll T[200009], H[200009];
ll Power100[200009];

ll Hash_value(ll l, ll r) {
    ll val = H[r] - (H[l - 1] * Power100[r - l + 1]) % mod;

    if (val < 0) val += mod;
    return val;
}


int main(void)
{
    // 入力
    cin >> N >> Q;
    cin >> S;

    string S_temp(N + 4, ' ');

    for (ll i = 1; i <= N; i++) {
        S_temp[i] = S[i - 1];
    }

    for (ll i = 1; i <= Q; i++) {
        cin >> X[i] >> C[i];
    }

    // 置き換える
    for (ll i = 1; i <= Q; i++) {
        S_temp[X[i]] = C[i];

        S_temp[N + 1] = 'A';
        S_temp[N + 2] = 'B';
        S_temp[N + 3] = 'C';

        // for (int i = 1; i <= N + 3; i++) cout << S_temp[i];
        // cout << endl;


        // 文字を数値に変換
        for (ll i = 1; i <= N + 3; i++) T[i] = (S_temp[i] - 'a') + 1;
        
        // B^0, B^1...を計算
        Power100[0] = 1;
        for (ll i = 1; i <= N + 3; i++) Power100[i] = 100 * Power100[i - 1] % mod;

        // Hを計算する
        H[0] = 0;
        for (ll i = 1; i <= N + 3; i++) H[i] = (100 * H[i - 1] + T[i]) % mod;


        ll Answer = 0;

        // クエリに答える
        for (ll i = 1; i <= N; i++) {
            // ABCのハッシュ
            ll Hash1 = Hash_value(N + 1, N + 3);

            if (S_temp[i] == 'A' && S_temp[i+1] == 'B' && S_temp[i+2] == 'C') {
                ll Hash = Hash_value(i, i + 2);

                if (Hash1 == Hash) {
                    Answer++;
                }
            }
        }

        cout << Answer << endl;
    }

    

    

    return 0;
}
