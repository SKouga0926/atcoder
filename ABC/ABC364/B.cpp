using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int H, W;
    cin >> H >> W;

    int S_i, S_j = 0;
    cin >> S_i >> S_j;

    S_i = S_i - 1;
    S_j = S_j - 1;

    vector<vector<char>> C(H, vector<char>(W));

    for (int i = 0; i < C.size(); i++)
    {
         for(int j = 0; j < C.at(i).size(); j++)
            {
                cin >> C.at(i).at(j);
            }
    }

    C.at(S_i).at(S_j) = '.';

    string X;
    cin >> X;

    for (int i = 0; i < X.size(); i++)
    {
        if (X[i] == 'L')
        {
            if (S_j == 0)
                continue;

            if (C.at(S_i).at(S_j - 1) == '.')
                S_j = S_j - 1;

            else
                continue;
        }

        if (X[i] == 'R')
        {
            if(S_j == C.at(0).size() - 1)
                continue;

            if (C.at(S_i).at(S_j + 1) == '.')
                S_j = S_j + 1;

            else
                continue;
        }

        if (X[i] == 'U')
        {
            if (S_i == 0)
                continue;

            if (C.at(S_i - 1).at(S_j) == '.')
                S_i = S_i - 1;

            else
                continue;
        }

        if (X[i] == 'D')
        {
            if (S_i == C.size() - 1)
                continue;

            if (C.at(S_i + 1).at(S_j) == '.')
                S_i = S_i + 1;

            else
                continue;
        }
    }

    cout << S_i + 1 << " " << S_j + 1 << endl;


    return 0;
}
