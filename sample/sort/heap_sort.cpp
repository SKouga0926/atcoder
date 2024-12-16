using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

// ヒープを再構築する関数（Heapify）
void heapify(int A[], int n, int i) {
    int largest = i; // 最大値の位置
    int left = 2 * i + 1; // 左の子ノード
    int right = 2 * i + 2; // 右の子ノード

    // 左の子ノードが親ノードより大きい場合
    if (left < n && A[left] > A[largest])
        largest = left;

    // 右の子ノードが最大値より大きい場合
    if (right < n && A[right] > A[largest])
        largest = right;

    // 最大値が親ノードでない場合、入れ替えて再帰的に処理
    if (largest != i) {
        swap(A[i], A[largest]);
        heapify(A, n, largest);
    }
}

// ヒープソート関数
void heapSort(int A[], int n) {
    // 配列をヒープ化する（Build Heap）
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(A, n, i);

    // 要素を一つずつヒープから取り出してソート
    for (int i = n - 1; i > 0; i--) {
        // 現在の最大値（根ノード）を末尾と交換
        swap(A[0], A[i]);

        // ヒープサイズを減らして再構築
        heapify(A, i, 0);
    }
}

int main() {
    // 入力
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];

    // ヒープソートを呼び出し
    heapSort(A, N);

    // 出力
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}
