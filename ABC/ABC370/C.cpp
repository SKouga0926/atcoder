// 初めてC問題解けた問題！！！！！

using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

string S, T;
vector<string> X[100009];

int main(void)
{
    // 入力
    cin >> S;
    cin >> T;

    for (int i = 0; i < (int)S.size(); i++) {

        // 異なる、かつ遅れている
        if (S[i] != T[i] && S[i] > T[i]) {
            S[i] = T[i];
            X[0].push_back(S);
        }
    }

    for (int i = (int)S.size() - 1; 0 <= i; i--) {

        if (S[i] != T[i]) {
            S[i] = T[i];
            X[0].push_back(S);
        }
    }

    cout << X[0].size() << endl;

    for (int i = 0; i < (int)X[0].size(); i++) {
        cout << X[0][i] << endl;
    }
    

    return 0;
}
