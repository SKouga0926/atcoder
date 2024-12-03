using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    vector<vector<int>> data = 
    {
        {7, 4, 0, 8},
        {2, 0, 3, 5},
        {6, 1, 7, 0},
    };

    // [0][1]番目へのアクセス
    cout << data.at(0).at(1) << endl;

    // 縦のサイズ
    cout << data.size() << endl;
    // 0番目の横のサイズ
    cout << data.at(0).size() << endl;

    vector<vector<int>> data2(3, vector<int>(4));

    for (int i = 0; i < data2.size(); i++)
    {
         for(int j = 0; j < data2.at(i).size(); j++)
            {
                cout << data2.at(i).at(j);
            }

        cout << endl;
    }

    return 0;
}
