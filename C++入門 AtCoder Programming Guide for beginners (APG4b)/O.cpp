using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int A, B, C;
    cin >> A >> B >> C;

    int maximum = max(max(A, B), C);
    int minumum = min(min(A, B), C);

    int diff = maximum - minumum;

    cout << diff << endl;

    return 0;
}
