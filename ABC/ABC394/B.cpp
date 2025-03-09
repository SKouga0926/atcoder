#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    int N;
    cin >> N;
    
    map<string, int> mp;

    for (int i = 1; i <= N; i++) {
        
        string S;
        cin >> S;
        int size = S.size();

        mp[S] = size;
    }

    vector<int> vec;

    for (const auto& [key, value] : mp) {
        vec.push_back(value);
    }

    sort(vec.begin(), vec.end());

    for (int num : vec) {
        for (const auto& [key, value] : mp) {
            if (value == num) {
                cout << key;
                break; 
            }
        }
    }

    cout << endl;

    return 0;
}
