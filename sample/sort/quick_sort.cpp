#include <iostream>
using namespace std;

// ピボット（基準値）を決める関数
int find_pivot(int data[], int left, int right) {
    return data[(left + right) / 2];
}

// クイックソートを行う関数
void quick_sort(int data[], int left, int right) {
    int i, j, pivot, tmp;

    // グループ内の要素が1つになれば終了
    if (left >= right) {
        return;
    }

    // ピボットを決定する
    pivot = find_pivot(data, left, right);

    i = left;  // ソート対象の始点
    j = right; // ソート対象の終点

    // データを「pivotより小さいグループ」と「pivotより大きいグループ」にわける
    while (true) {

        // pivotより大きいデータを探す
        while (data[i] < pivot) {
            i += 1;
        }

        // pivotより小さいデータを探す
        while (data[j] > pivot) {
            j -= 1;
        }

        if (i >= j) {
            break; // 「pivotより小さい」と「pivotより大きい」の2つに分けられたら終了
        }

        // data[i] と data[j] を交換
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;

        i += 1;
        j -= 1;
    }

    // pivot以下のグループ
    quick_sort(data, left, i - 1);
    // pivot以上のグループ
    quick_sort(data, j + 1, right);
}

int main() {
    int N;

    // 配列のサイズを入力
    cout << "Enter the number of elements: ";
    cin >> N;

    int data[N];

    // 配列の要素を入力
    cout << "Enter the elements: ";
    for (int i = 0; i < N; i++) {
        cin >> data[i];
    }

    // クイックソートを呼び出し
    quick_sort(data, 0, N - 1);

    // ソート後の配列を出力
    cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
