using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int main(void)
{
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    for (int i = N - K; i < N; i++) cout << A.at(i) << " ";
    for (int i = 0; i < N - K; i++) cout << A.at(i) << " ";


    return 0;
}
