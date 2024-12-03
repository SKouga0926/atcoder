using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    long long N;
    long long X, Y;
    cin >> N >> X >> Y;

    vector<long long> A(N), B(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
        cin >> B.at(i);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    long long sum_sweet = 0;
    long long sum_salty = 0;

    long long num_sweet = 0;
    long long num_salty = 0;

    while(num_sweet < N)
    {
        sum_sweet += A.at(num_sweet);

        num_sweet++;

        if (sum_sweet > X)
        {
            break;
        }
    }

    while(num_salty < N)
    {
        sum_salty += B.at(num_salty);

        num_salty++;

        if (sum_salty > Y)
        {
            break;
        }
    }

    cout << min(sum_sweet, sum_salty) << endl;

    return 0;
}
