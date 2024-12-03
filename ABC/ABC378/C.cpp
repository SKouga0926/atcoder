#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    int N;
    int A[200009];

    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    int B[200009];
    B[1] = -1;

    bool is = false;
    int memo = 0;

    for (int i = 2; i <= N; i++) {
        is = false;

        for (int j = 1; j < i; j++) {
            if (A[i] == A[j]) {
                is = true;
                B[i] = j;
                memo = j;
            }
        }

        if (is == false) B[i] = -1;
    }

    for (int i = 1; i <= N; i++) {
        if (i != 1) cout << " " << B[i];
        else cout << B[i];
    }

    return 0;
}
