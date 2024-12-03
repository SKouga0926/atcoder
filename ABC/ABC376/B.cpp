#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N, Q;
char H[109];
int T[109];

int main(void)
{
    // 初期位置
    int L = 1;
    int R = 2;
    int cost = 0;


    // 入力
    cin >> N >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> H[i] >> T[i];
    }

    for (int i = 1; i <= Q; i++) {
        if (H[i] == 'R') {

            if (R < L && L < T[i]) {
                cost += ((R - 1) + (N - T[i]) + 1);
            } 
            else if (T[i] < L && L < R) {
                cost += ((N - R) + (T[i] - 1) + 1);
            }

            else if (R == T[i]) {
                cost += 0;
            }

            else {
                cost += (abs(R - T[i]));
            }
            R = T[i];
        }

        else if (H[i] == 'L') {

            if (L < R && R < T[i]) {
                cost += ((L - 1) + (N - T[i]) + 1);
            } 
            else if (T[i] < R && R < L) {
                cost += ((N - L) + (T[i] - 1) + 1);
            }
            else if (L == T[i]) {
                cost += 0;
            }
            else {
                cost += (abs(L - T[i]));
            }

            L = T[i];
        }
    }

    cout << cost << endl;
    

    return 0;
}
