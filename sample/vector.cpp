#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }

    for (int val : vec)
    {
        cout << val;
    }

    return 0;
}