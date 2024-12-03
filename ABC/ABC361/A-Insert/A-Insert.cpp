#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, K, X;

    cin >> N >> K >> X;

    int A[N];
    
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int B[N + 1];

    int i = 0;

    for (i = 0; i < N + 1; i++)
    {

        B[i] = A[i];

        if (i == K)
        {
            B[i] = X;
            cout << B[i] << " ";
            break;
        }

        cout << B[i] << " ";
    }

    for (i = i + 1; i < N + 1; i++)
    {
        B[i] = A[i-1];
        cout << B[i] << " ";
    }

    cout << endl;

    return 0;
}