#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

ll factorial(ll n)
{
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main(void)
{
    ll X;
    cin >> X;

    ll N = 1;

    while (true) {

        ll temp = factorial(N);

        if (temp == X) {
            cout << N;
            break;
        }

        N++;

    }

    return 0;
}
