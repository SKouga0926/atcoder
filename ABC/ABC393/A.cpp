#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    string S1, S2;
    cin >> S1 >> S2;

    if (S1 == "fine" && S2 == "fine") cout << "4" << endl;
    if (S1 == "fine" && S2 == "sick") cout << "3" << endl;
    if (S1 == "sick" && S2 == "fine") cout << "2" << endl;
    if (S1 == "sick" && S2 == "sick") cout << "1" << endl;

    return 0;
}
