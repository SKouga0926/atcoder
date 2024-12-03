#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string S;

int main(void)
{
    //入力
    cin >> S;

    int point = 0;

    for (int i = S.size() - 1; i >= 0; i--) {
        if (S[i] == '.') {
            point = i;
            break;
        }
    }

    for (int i = point + 1; i < S.size(); i++) cout << S[i];
    cout << endl;
    
    

    return 0;
}
