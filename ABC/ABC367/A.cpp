using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int main(void)
{
    // 入力
    int A, B, C;
    cin >> A >> B >> C;

    // 判定
    if (A >= C && A <= B) cout << "Yes" << endl;
    else if (A >= C && A <= 24 && 0 <= B && B <= C) cout << "Yes" << endl;
    else if (A >= 0 && A <= B && B <= C && C <= 24) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
