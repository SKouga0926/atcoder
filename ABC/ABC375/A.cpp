#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N;
string S;

int main(void)
{
    cin >> N;
    cin >> S;

    ll j = 0;

    for (ll i = N; i > 0; i--) {
        S[i] = S[i - 1];
    }

    for (ll i = 1; i <= N - 2; i++) {
        if (S[i] == '#' && S[i + 1] == '.' && S[i + 2] == '#') j++;
    }

    cout << j << endl;
    

    return 0;
}
