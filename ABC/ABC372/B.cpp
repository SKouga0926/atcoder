using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int M;

int Q;
int Mod;

vector<int> Answer;

int main(void)
{
    cin >> M;

    while(true) {

        Q = M / 3;
        Mod = M % 3; 

        Answer.push_back(Mod);

        if (Q == 0) break;

        M = Q;
    }

    reverse(Answer.begin(), Answer.end());

    for (int ans : Answer) cout << ans;
    cout << endl;

    return 0;
}
