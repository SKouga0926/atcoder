#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] != '2') continue;
        else cout << S[i];
    }

    cout << endl;

    return 0;
}
