using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int N, S;
    cin >> N >> S;

    vector<int> A(N), P(N);

    for (int i = 0; i < A.size(); i++)
    {
        cin >> A.at(i);
    }

    for (int i = 0; i < P.size(); i++)
    {
        cin >> P.at(i);
    }

    int n = 0;

    for (int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            {
                if ((A.at(i) + P.at(j)) == S)
                    {
                        n++;
                    }
            }
    
    cout << n << endl;

    return 0;
}
