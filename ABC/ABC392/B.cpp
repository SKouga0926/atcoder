#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N, M;

    cin >> N >> M;
    vector<int> A(M);
    for (int i = 0; i < M; i++) cin >> A[i];

    vector<int> B;

    bool flag = false;

    for (int i = 1; i <= N; i++) {
        
        for (int j = 0; j < A.size(); j++) {
            if (i == A[j]) {
                flag = true;
                break;
            }
        }

        if (flag == false) B.push_back(i);
        flag = false;
    }

    sort(B.begin(), B.end());

    cout << B.size() << endl;
    for(int i = 0; i < B.size(); i++) cout << B[i] << " ";

    return 0;
}
