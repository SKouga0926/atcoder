#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string S;

int main(void)
{
    // 入力
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (i == 0 && islower(S[i])) {
            cout << "No" << endl;
            return 0;
        } 

        if (i != 0 && isupper(S[i])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    

    return 0;
}
