#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N, M;
    char S[59][59];
    char T[59][59];

    cin >> N >> M;
    for (int i = 1; i <= N; i++) 
        for (int j = 1; j <= N; j++) {
            cin >> S[i][j];
        }

    for (int i = 1; i <= M; i++) 
        for (int j = 1; j <= M; j++) {
            cin >> T[i][j];
        }

    for (int a = 1; a <= N - M + 1; a++) {
        for (int b = 1; b <= N - M + 1; b++) {
            
        }

    }

    return 0;
}
