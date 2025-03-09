#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N;
    ll A[109];

    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    bool flag = true;

    for (int i = 1; i <= N - 2; i++) {
        if (A[i + 1] * A[i + 1] != A[i] * A[i + 2]) {
            flag = false;
            break;
        }
    }

    if (flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
