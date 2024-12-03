using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N;
int A[109][109];

int main(void)
{
    // 入力
    cin >> N;

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= i; j++) {
            cin >> A[i][j];
        }

    int genso = A[1][1];

    for (int i = 2; i <= N; i++) {
        
        if (genso >= i) genso = A[genso][i];
        else genso = A[i][genso];
    }

    cout << genso << endl;
    

    return 0;
}
