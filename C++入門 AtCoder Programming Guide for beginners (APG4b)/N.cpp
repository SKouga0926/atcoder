#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    int N;
    cin >> N;

    vector<int> A(N);
    int sum = 0;
    int avg = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
        sum = sum + A.at(i);
    }

    avg = sum / N;

    for (int i = 0; i < N; i++)
    {
        if (A.at(i) >= avg)
        {
            cout <<  A.at(i) - avg << endl;
        }

        else
        {
            cout <<  avg - A.at(i) << endl;
        }
    }

    return 0;
}
