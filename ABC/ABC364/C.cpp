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
    }

    for (int i = 0; i < N; i++)
    {
        cin >> B.at(i);
    }

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());

    long sum_sweet = 0;
    long sum_salty = 0;

    int i = 0;

   while(i < N)
   {
        sum_sweet += A.at(i);
        sum_salty += B.at(i);

        i++;

        if (sum_sweet > X || sum_salty > Y)
        {
            break;
        }
   }

   cout << i << endl;


    return 0;
}
