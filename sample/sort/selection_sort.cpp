using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N;
int A[100009];

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    for (int i = 1; i <= N - 1; i++) {

        int minIndex = i;
        
        for (int j = i + 1; j <= N; j++) {
            if (A[minIndex] > A[j]) {
                minIndex = j;
            }
        }

        swap(A[i], A[minIndex]);
    }

    for (int i = 1; i <= N; i++) cout << A[i] << " ";
    cout << endl;

    return 0;
}
