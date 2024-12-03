using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int L, R;

int main(void)
{
    // 入力
    cin >> L >> R;

    if (L == 0 && R == 0) {
        cout << "Invalid" << endl;
    }
    if (L == 0 && R == 1) {
        cout << "No" << endl;
    }
    if (L == 1 && R == 0) {
        cout << "Yes" << endl;
    }
    if (L == 1 && R == 1) {
        cout << "Invalid" << endl;
    }
    

    return 0;
}
