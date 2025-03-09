#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N, M;
    cin >> N >> M;
    
    int ans = 0;
    map<pair<int, int>, int> mp;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;

        if (u == v) {
            ans++;
            continue;
        }

        if (u > v) swap(u, v);
        mp[{u, v}]++;
    }

    for (auto& [key, value] : mp) {
        ans += value - 1;
    }

    cout << ans << endl;

    return 0;
}
