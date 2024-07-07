#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    int x, a, b;
    cin >> x >> a >> b;

    // 1.の出力
    x++;
    cout << x << endl;

    x = x * (a + b);
    cout << x << endl;

    x = x * x;
    cout << x << endl;

    x = x - 1;
    cout << x << endl;

    return 0;
}
