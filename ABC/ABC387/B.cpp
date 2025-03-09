#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int X;
    cin >> X;

    int sum = 0;

    for (int i = 1; i <= 9; i++)
        for (int j = 1; j <= 9; j++) 
            {
                if (X != i * j) sum += (i * j);
            }   

    cout << sum << endl;

    return 0;
}
