using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int n, X;
    cin >> n >> X;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (X & (1 << i))
        {
            sum += a.at(i);
        }
    }

    cout << sum << endl;

    return 0;
}
