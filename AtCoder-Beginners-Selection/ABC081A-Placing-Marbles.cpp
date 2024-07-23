using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    string S;
    cin >> S;

    int num = 0;

    if (S[0] == '1')
        num++;

    if (S[1] == '1')
        num++;

    if (S[2] == '1')
        num++;

    cout << num << endl;

    return 0;
}
