#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    string S;
    cin >> S;

    int size = S.size();
    int i = 0;
    int count = 0;

    while (i < size - 1) {  

        if (i + 1 < size && S[i] == 'W' && S[i + 1] == 'W') {  
            count++;

            if (i + 2 < size && S[i + 2] == 'A') {  
                S[i + 2 - count - 1] = 'A';

                for (int j = i + 2 - count; j <= i + 2; j++) S[j] = 'C';

                count = 0;
            }   
        } else {
            count = 0;
        }

        if (i + 1 < size && S[i] == 'W' && S[i + 1] == 'A') {  
            S[i] = 'A';
            S[i + 1] = 'C';
        }

        i++;
    }

    cout << S << endl;
    return 0;
}
