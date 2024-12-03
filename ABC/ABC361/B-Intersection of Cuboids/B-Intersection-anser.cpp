#include <bits/stdc++.h>
using namespace std;

bool f(int l1, int r1, int l2, int r2)
{
    if (r1 <= l2 || r2 <= l1)
    {
        return false;
    }

    else 
    {
        return true;
    }
}

int main(void)
{
    int x1, y1, z1, x2, y2, z2 = 0;
    int x3, y3, z3, x4, y4, z4 = 0;

    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    cin >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;

    if (f(x1,x2,x3,x4) && f(y1,y2,y3,y4) && f(z1,z2,z3,z4))
    {
        cout << "Yes" << endl;
    }

    else 
    {
        cout << "No" << endl;
    }

    return 0;
}