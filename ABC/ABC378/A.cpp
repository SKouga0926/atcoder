#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    int A[10];

    for (int i = 1; i <= 4; i++) cin >> A[i];

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;

    int count = 0;

    for (int i = 1; i <= 4; i++) {
        if (A[i] == 1) count1++;
    }

    count += (count1 / 2);

    for (int i = 1; i <= 4; i++) {
        if (A[i] == 2) count2++;
    }

    count += (count2 / 2);

    for (int i = 1; i <= 4; i++) {
        if (A[i] == 3) count3++;
    }

    count += (count3 / 2);

    for (int i = 1; i <= 4; i++) {
        if (A[i] == 4) count4++;
    }

    count += (count4 / 2);

    cout << count << endl;

    return 0;
}
