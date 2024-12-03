#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
int X[109], Y[109];

int main(void)
{
    // 入力
    cin >> N;

    int sum_x = 0;
    int sum_y = 0;

    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
        sum_x += X[i];
        sum_y += Y[i];
    }

    if (sum_x > sum_y) cout << "Takahashi" << endl;
    else if (sum_x < sum_y) cout << "Aoki " << endl;
    else cout << "Draw" << endl;
    

    return 0;
}
