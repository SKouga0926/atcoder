#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string S;
int S_size;

int main(void)
{
    // 入力
    cin >> S;
    S_size = S.size();

    S[S_size - 1] = '4';

    cout << S << endl;

    return 0;
}
