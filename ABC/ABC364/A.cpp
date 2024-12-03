using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int N;
    cin >> N;

    string S[N];

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    int kaisu = 0;

    for (int i = 0; i < N - 1; i++)
    {
        if(i == N - 2)
            break;

        if(S[i] == "sweet" && S[i + 1] == "sweet")
        {
            kaisu++;
        }
    }

    if (kaisu > 0 )
    {
        cout << "No" << endl;
    }

    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}
