#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    string S;
    cin >> S;

    int num1 = S[0] - '0';
    int num2 = S[2] - '0';

    cout << num1 * num2 << endl;

    return 0;
}
