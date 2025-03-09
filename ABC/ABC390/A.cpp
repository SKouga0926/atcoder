#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

bool judge_syoujun(vector<int> A)
{
    bool flag = true;

   for (int i = 0; i < A.size() - 1; i++) {
        if (A[i] > A[i + 1]) {
            return false;
        }
    }

    return flag;
}

int main(void)
{
    vector<int> A(5);
    int N = A.size();
    for (int i = 0; i < N; i++) cin >> A[i];

    bool flag = false;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            
            swap(A[i], A[j]);

            flag = judge_syoujun(A);

            if (flag == true) {
                break;
            }

            swap(A[i], A[j]);
        }

        if (flag == true) {
            break;
        }
    }

    if (flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;


    

    return 0;
}
