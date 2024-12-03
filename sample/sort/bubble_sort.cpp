using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N;
int A[100009];

int tmp;

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // バブルソート
    for (int i = 1; i <= N; i++)
        for (int j = i + 1; j <= N; j++) {
            if (A[i] > A[j]) {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }   

    for (int i = 1; i <= N; i++) cout << A[i] << " ";
    cout << endl;

    return 0;
}
