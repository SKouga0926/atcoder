#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    ll N;
    cin >> N;

    ll X[N + 9], Y[N + 9];
    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
    }

    double sum = 0;

    sum += sqrt((double)X[1] * X[1] + (double)Y[1] * Y[1]);

    for (int i = 1; i <= N - 1; i++) {
        sum += sqrt((double)(X[i] - X[i + 1]) * (X[i] - X[i + 1]) + (double)(Y[i] - Y[i + 1]) * (Y[i] - Y[i + 1]));
    }

    sum += sqrt(X[N] * X[N] + Y[N] * Y[N]);

    cout << fixed << setprecision(10) << sum << endl;
    

    return 0;
}
