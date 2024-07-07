#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    int N, K;
    cin >> N >> K;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i] ;
    }

    // 配列Aをソート
    sort(A.begin(), A.end());

    int min_diff = INT_MAX;
    int i = 0;

    while(true)
    {
        int current_diff = A[N - K - 1 + i] - A[i];
        if (current_diff < min_diff)
            min_diff = current_diff;

        if (N - K - 1 + i == N - 1)
            break;

        i++;
    }

    cout << min_diff;

    return 0;
}
