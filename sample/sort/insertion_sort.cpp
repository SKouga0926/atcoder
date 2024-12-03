using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N;
int A[100009];

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 1; i < N; i++) {
        int j = i;

        while(j >= 1 && A[j-1] > A[j]) {
            swap(A[j-1], A[j]);
            j--;
        }
    }

    for (int i = 0; i < N; i++) cout << A[i] << " ";
    cout << endl;
    

    return 0;
}
