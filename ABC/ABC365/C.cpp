using namespace std;
#include <bits/stdc++.h>

typedef long long ll;


int main(void)
{
    ll N, M;

    // 入力
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 1; i <= N; i++) cin >> A[i];

    ll sum = accumulate(A.begin(), A.end(), 0ll);

    if (sum <= M) {
        cout << "infinite" << endl;
        return 0;
    }

    ll left = 0, right = 1000000000;
    int mid = 0;

    while(left <= right)
    {
        mid = (left + right) / 2;
        ll tmp = 0;

        for (auto a : A) tmp += min(mid, a);

        if (tmp > M) right = mid - 1;
        else if (tmp < M) left = mid + 1;
    }

    cout << right << endl;

    return 0;
}
