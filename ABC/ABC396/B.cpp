#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int Q;
    int type_query;
    int query;

    stack<int> st;

    cin >> Q;

    for (int i = 1; i <= 100; i++) st.push(0);

    for (int i = 1; i <= Q; i++) {
        cin >> type_query;

        if (type_query == 1) {
            cin >> query;

            st.push(query);
        }

        else if (type_query == 2) {

            cout << st.top() << endl;
            st.pop();

        }
    }


    return 0;
}
