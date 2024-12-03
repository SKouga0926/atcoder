#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int extract(int i, string query[])
{
    int j = query[i].size() - 1;
    string temp = "";

    while (true) {
        if (query[i][j] == ' ') break;

        temp += query[i][j];

        j--;
    }

    reverse(temp.begin(), temp.end());
    return stoi(temp);
}

int main(void)
{
    int Q;
    string query[109];

    // 入力
    cin >> Q;
    cin.ignore();
    for (int i = 1; i <= Q; i++) getline(cin, query[i]);

    vector<int> A;
    int x;
    int k;

    for (int i = 1; i <= Q; i++) {
        if (query[i][0] == '1') {
            x = extract(i, query);
            A.push_back(x);
        }

        else if (query[i][0] == '2') {
            k = extract(i, query);
            int size = A.size();
            cout << A[size - k] << endl;
        }
    }

    return 0;
}
