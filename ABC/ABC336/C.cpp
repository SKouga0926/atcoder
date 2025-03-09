#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    ll N;
    cin >> N;

    N = N - 1;

    ll Q;
    ll R;
    vector<int> vec;

    while (true) {

        Q = N / 5;
        R = N % 5;

        N = Q;

        vec.push_back(R);

        if (Q == 0) break;
    }

    if (vec.empty()) vec.push_back(0);
    reverse(vec.begin(), vec.end());

    for (auto num : vec) cout << 2 * num;
    cout << endl;

    return 0;
}
