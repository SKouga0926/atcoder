using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
        
    }

    vector<int> A_temp(N);
    A_temp = A;

    sort(A.rbegin(), A.rend());

    // for (int i = 0; i < N; i++)
    // {
    //     cout << A.at(i);
    // }

    for (int i = 0; i < N; i++)
    {
        if ( A_temp.at(i) == A.at(1))
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}
