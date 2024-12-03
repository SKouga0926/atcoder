#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    int A, B, D;

    // 入力
    cin >> A >> B >> D;
    int S = A;
    cout << S << " ";

    while (true) {
        if (S == B) break;

        S += D;

        cout << S << " ";
    }

    cout << endl;

    return 0;
}
