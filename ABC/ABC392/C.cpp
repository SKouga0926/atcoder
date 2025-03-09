#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N;
    int P[300009];
    int Q[300009];

    cin >> N;
    // P[i]は人iが見つめている人．
    for (int i = 1; i <= N; i++) cin >> P[i];
    // Q[i]は人iが着ているゼッケン番号．
    for (int i = 1; i <= N; i++) cin >> Q[i];

    map<int, int> mp;
    // map<人i, ゼッケンQ[i]>

    for (int i = 1; i <= N; i++) {
        mp[Q[i]] = i;
    }

    for (int i = 1; i <= N; i++) {
        cout << Q[P[mp[i]]] << " ";
    }

    return 0;
}
