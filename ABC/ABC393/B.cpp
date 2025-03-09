#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    string S;
    cin >> S;

    int pos_A, pos_B, pos_C;
    int count = 0;

    for (int i = 0; i < S.size(); i++) 
        for (int j = i + 1; j < S.size(); j++) 
            for (int k = j + 1; k < S.size(); k++) {

            if (S[i] == 'A' && S[j] == 'B' && S[k] == 'C') {
                pos_A = i;
                pos_B = j;
                pos_C = k;
                if ((pos_B - pos_A) == (pos_C - pos_B)) count++;
                
            }
        }

    cout << count << endl;
    


    return 0;
}
