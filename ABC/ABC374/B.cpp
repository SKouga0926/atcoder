#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    string S, T;
    cin >> S;
    cin >> T;

    int big_size;
    int small_size;
    if (S.size() > T.size()) {
        big_size = S.size();
        small_size = T.size();
    }

    if (S.size() < T.size()) {
        big_size = T.size();
        small_size = S.size();
    }

    else {
        big_size = S.size();
        small_size = S.size();
    }

    int count = 0;

    for (int i = 0; i < small_size; i++) {

        if (S[i] == T[i]) {
            count++;
        }

        else {
            cout << count + 1 << endl;
            return 0;
        }
    }

    if (small_size != big_size) cout << count + 1 << endl;
    else if (small_size == big_size && count == small_size) cout << 0 << endl;

    return 0;
}
