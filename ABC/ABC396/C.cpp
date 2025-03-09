#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N, M;

    cin >> N >> M;
    vector<int> B(N);
    vector<int> W(M);
    
    for (int i = 0; i < N; i++) cin >> B[i];
    for (int i = 0; i < M; i++) cin >> W[i];

    sort(B.rbegin(), B.rend());
    sort(W.rbegin(), W.rend());

    int sum = 0;
    int B_count = 0;
    int W_count = 0;

    for (int i = 0; i < N; i++) {
        if (B[i] >= 0) {
            B_count++;
        }
    }

    for (int j = 0; j < M; j++) {
        if (W[j] >= 0) {
            W_count++;
        } 
    }

    if (B_count >= W_count) {
        for (int i = 0; i < B_count; i++) {
            if (B[i] >= 0) {
                sum += B[i];
            }
        }

        for (int i = 0; i < W_count; i++) {
            if (W[i] >= 0) {
                sum += W[i];
            }
        }
    }

    else if (B_count < W_count) {

        for (int i = 0; i < B_count; i++) {
            // どちらも正
            if (B[i] >= 0 && W[i] >= 0) {
                sum += (B[i] + W[i]);
            }

            // Bが正でWが負
            if (B[i] >= 0 && W[i] <= 0) {
                if(B[i] >= W[i]) {
                    sum += (B[i] + W[i]);
                }
            }

            // Bが負でWが正
            if (B[i] <= 0 && W[i] >= 0) {
                if(W[i] >= B[i]) {
                    sum += (B[i] + W[i]);
                }
            }
        }

        for (int i = B_count; i < W_count; i++) {

            if (B_count >= B.size()) break; 

            if (B[i] + W[i] >= 0) sum += (B[i] + W[i]);
        }
    }

    cout << sum << endl;


    return 0;
}
