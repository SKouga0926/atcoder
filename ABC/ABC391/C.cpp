#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N, Q;
    cin >> N >> Q;

    int QueryType[300009];
    int P, H;

    vector<int> su(N + 1, 1);
    vector<int> hato(N + 1);
    for (int i = 1; i <= N; i++) {
        hato[i] = i;
    }

    int counter = 0;
    bool flag1 = false;
    bool flag2 = false;
    
    for (int i = 1; i <= Q; i++) {

        cin >> QueryType[i];

        if (QueryType[i] == 1) {

            cin >> P >> H;

            int from = hato[P];
            int to = H;

            if (su[from] == 2) counter--;

            su[hato[P]]--;

            hato[P] = H;

            su[H]++;

           if (su[to] == 2) counter++;
        }

        if (QueryType[i] == 2) {
            cout << counter << endl;
        }
    }

    return 0;
}
