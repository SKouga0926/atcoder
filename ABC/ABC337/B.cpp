#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string S;

int main(void)
{
    // 入力
    cin >> S;

    // start : 0, A : 1, B : 2, C : 3
    int stage = 0;

    for (int i = 0; i < S.size(); i++) {

        if (stage == 0) {
            if (S[i] == 'B' || S[i] == 'C') {
                cout << "No" << endl;
                return 0;
            }

            else if (S[i] == 'A' && S[i + 1] ==) stage++;
        }

        else if (stage == 1) {

            if (S[i] == 'B' || S[i] == 'C') {
                cout << "No" << endl;
                return 0;
            }

            else if (S[i] == 'A') stage++;


        }

        else if (stage == 2) {

        }

    }

    return 0;
}
