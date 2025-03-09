#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int A[9];
    cin >> A[1] >> A[2] >> A[3];

    bool flag = false;

    for (int i = 1; i <= 3; i++) {
        
        if (i == 1) {
            swap(A[1], A[2]);

            if (A[1] * A[2] == A[3]) flag = true;
            else swap(A[1], A[2]);
        }

        else if (i == 2) {
            swap(A[2], A[3]);
            
            if (A[1] * A[2] == A[3]) flag = true;
            else swap(A[2], A[3]);
        }

        else if (i == 3) {
            swap(A[1], A[3]);

            if (A[1] * A[2] == A[3]) flag = true;
            else swap(A[1], A[3]);
        }
    }

    if (flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    

    return 0;
}
