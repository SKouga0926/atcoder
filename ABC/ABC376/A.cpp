#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N, C;
ll T[1009];

int main(void)
{
    cin >> N >> C;
    for (ll i = 1; i <= N; i++) cin >> T[i];

    ll count = 1;
    ll i = 2;
    ll j = 1;

    for (int i = 2; i <= N; i++) { 
        if (T[i] - T[j] >= C) {
            count++;
            j = i; 
        }
    }

    cout << count << endl;
    

    return 0;
}
