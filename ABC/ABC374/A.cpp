#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string S;

int main(void)
{
    cin >> S;

    if (S[S.size() - 3] == 's' && S[S.size() - 2] == 'a' && S[S.size() - 1] == 'n') cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
