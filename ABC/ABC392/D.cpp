#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N); // サイコロごとの面の数字
    vector<map<int, int>> count(N); // サイコロiにおける各面の出現回数

    // サイコロの面を入力
    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        A[i].resize(K);
        for (int j = 0; j < K; j++) {
            cin >> A[i][j];
            count[i][A[i][j]]++; // 出現回数をカウント
        }
    }

    double max_prob = 0;

    // サイコロのペアを全探索
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            double prob = 0;
            // サイコロiの目に対して、サイコロjが一致する確率を計算
            for (auto &p : count[i]) {
                int X = p.first;
                if (count[j].count(X)) {
                    prob += (double(p.second) / A[i].size()) * (double(count[j][X]) / A[j].size());
                }
            }
            max_prob = max(max_prob, prob); // 最大確率を更新
        }
    }

    cout << fixed << setprecision(12) << max_prob << endl;
    return 0;
}
