#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
vector<vector<char>> A(3009, vector<char>(3009));
vector<vector<char>> B(3009, vector<char>(3009));

int main(void)
{
    cin >> N;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++) cin >> A[i][j];

    B = A;

    int i = 1;
    
    while (i <= N / 2) {

        for (int x = i; x <= N + 1 - i; x++) {
            for (int y = i; y <= N + 1 - i; y++) {
                B[y][N + 1 - x] = A[x][y];
            }     
        }

        i++;
    }

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++) {
            cout << B[i][j];
        }

        cout << endl;

    return 0;
}
