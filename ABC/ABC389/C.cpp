#include <bits/stdc++.h>
using namespace std;

template<typename T> bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<typename T> bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

typedef long long ll;

int main(void) {
    int Q;
    string query[30009];

    // 入力を受け取る
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> query[i];
    }

    deque<int> que;

    for (int i = 1; i <= Q; i++) {

        if (query[i][0] == '1') {
            // '1' のクエリの場合、後ろに数字を追加
            int l = query[i].length() > 2 ? query[i][2] - '0' : 0;  // 長さを確認してから処理

            int temp = 0;
            if (!que.empty()) temp = que.back();  // キューの最後の要素を取得
            else temp = 0;

            que.push_back(temp + l);  // 新しい要素を追加
        }

        if (query[i][0] == '2') {
            // '2' のクエリの場合、先頭の要素を取り出してその後ろの要素を更新
            int temp = 0;

            if (!que.empty()) temp = que.front();  // 先頭の要素を取得
            else temp = 0;

            que.pop_front();  // 先頭の要素を削除

            // 残りの要素を更新
            int size = que.size();
            for (int j = 0; j < size; j++) {
                int frontvalue = que.front();
                que.pop_front();
                frontvalue -= temp;
                que.push_back(frontvalue);  // 更新した値を後ろに追加
            }
        }

        if (query[i][0] == '3') {
            // '3' のクエリの場合、指定した位置の要素を出力
            int k = query[i].length() > 2 ? query[i][2] - '0' : -1;  // 長さを確認してから処理

            // インデックスが範囲内か確認
            if (k >= 0 && k < que.size()) {
                cout << que[k] << endl;  // k番目の要素を出力
            } else {
                cout << "Invalid Index" << endl;  // 範囲外の場合
            }
        }
    }

    return 0;
}
