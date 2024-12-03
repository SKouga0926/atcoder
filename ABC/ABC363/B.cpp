using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int N, T, P;
    cin >> N >> T >> P;

    int L[N];

    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }

    int num = 0;
    int day = 0;

    while(true)
    {
        num = 0;
        for (int i = 0; i < N; i++)
        {
           if (L[i] >= T)
           {
                num++;
           }
        }

        if (num >= P)
        {
            cout << day << endl;
            break;
        }

        for (int i = 0; i < N; i++)
        {
           L[i] = L[i] + 1;
        }

        day++;
    }

    return 0;
}
