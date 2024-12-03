#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string S;
map<char, int> myMap;

int main(void)
{
    // 入力
    cin >> S;

    // map初期化処理
    for (int i = 0; i < S.size(); i++) {
        myMap[S[i]] = 0;
    }

    // カウント
    for (int i = 0; i < S.size(); i++) {
        myMap[S[i]] += 1;
    }

    vector<char> maxKeys;
    char maxKey;
    int maxValue = INT_MIN;

    for (const auto& [key, value] : myMap) {
        if (value > maxValue) {
            maxValue = value;
            maxKey = key;
            maxKeys.clear();
            maxKeys.push_back(maxKey);
        }

        else if (value == maxValue) {
            maxValue = value;
            maxKey = key;
            maxKeys.push_back(maxKey);
        }
    }

    char minAlpabet = 'z';

    for (char ch : maxKeys) {
        if (ch < minAlpabet) minAlpabet = ch;
    }

    cout << minAlpabet << endl;
    
    

    return 0;
}
