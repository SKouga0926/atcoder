using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int Y;
    cin >> Y;

    if (!(Y % 4 == 0))
    {
        cout << "365" << endl;
    }

    if ((Y % 4 == 0) && !(Y % 100 == 0))
    {
        cout << "366" << endl;
    }

    if ((Y % 100 == 0) && !(Y % 400 == 0))
    {
        cout << "365" << endl;
    }

    if ((Y % 400 == 0))
    {
        cout << "366" << endl;
    }

    return 0;
}
