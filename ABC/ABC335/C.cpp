#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N, Q;
    int QueryType;
    char C;
    int p;

    cin >> N >> Q;

    deque<pair<int, int>> deq;
    for (int i = 1; i <= N; i++) deq.push_back({i, 0});

    unordered_map<char, pair<int, int>> un_map = {
        {'R', {1, 0}}, {'L', {-1, 0}}, {'U', {0, 1}}, {'D', {0, -1}}
    };

    for (int i = 1; i <= Q; i++) {
        cin >> QueryType;

        if (QueryType == 1) {
            cin >> C;

            pair<int, int> d;
            pair<int, int> p;

            d = un_map[C];
            p = deq.front();

            deq.push_front({p.first + d.first, p.second + d.second});
            deq.pop_back();
        }

        else if (QueryType == 2) {
            cin >> p;

            cout << deq[p - 1].first << " " << deq[p - 1].second << endl;
        }
    }

    return 0;
}
