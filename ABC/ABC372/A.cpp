using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

string S;
string S2;

int main(void)
{
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '.') {
            
        }

        else {
            S2 += S[i];
        }
    }

    cout << S2 << endl;

    return 0;
}
