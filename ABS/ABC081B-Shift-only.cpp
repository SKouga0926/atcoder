using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int EvenNum = 0;

    for (int i = 0; i < N; i++)
    {
        if ((A[i] % 2) == 0)
        {
            EvenNum++;
        } 
    }

    if (EvenNum == N)
    {

    }

    else
    {
        cout << 0 << endl;
    }

    

    return 0;
}
