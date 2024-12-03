#include <iostream>
using namespace std;

// 配列の2つの要素を交換する関数
void swap(int A[], int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

// 親子を比較しながら下に降りる関数
void down_to_leaf(int A[], int N, int target) {
    int left = target * 2 + 1;
    int right = target * 2 + 2;
    int max_idx = target;

    // 左の子ノードが存在し、親より大きい場合
    if (left < N && A[left] > A[max_idx]) {
        max_idx = left;
    }

    // 右の子ノードが存在し、親より大きい場合
    if (right < N && A[right] > A[max_idx]) {
        max_idx = right;
    }

    // 最大値が親でない場合、入れ替えて再帰的に実行
    if (max_idx != target) {
        swap(A, max_idx, target);
        down_to_leaf(A, N, max_idx);
    }
}

// ヒープ構造を作成する関数
void heapify(int A[], int N) {
    for (int i = N / 2 - 1; i >= 0; i--) {
        down_to_leaf(A, N, i);
    }
}

// ヒープソートを実行する関数
void heap_sort(int A[], int N) {
    heapify(A, N);

    for (int i = N - 1; i > 0; i--) {
        swap(A, 0, i);  // ルート（最大値）を末尾に移動
        down_to_leaf(A, i, 0);  // 残りの部分に対してヒープを再構築
    }
}

int main() {
    int A[] = {3, 19, 1, 14, 8, 7};
    int N = sizeof(A) / sizeof(A[0]);

    heap_sort(A, N);

    cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
