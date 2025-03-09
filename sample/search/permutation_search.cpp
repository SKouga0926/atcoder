#include <iostream>
#include <vector>
#include <algorithm> // next_permutation
#include <numeric>   // iota

int main() {
    int n = 4; // 順列の要素数
    std::vector<int> order(n);
    std::iota(order.begin(), order.end(), 1); // {1, 2, 3, ..., n} を生成

    std::cout << "順列:\n";
    int count = 0;

    do {
        // 現在の順列を出力
        for (int num : order) {
            std::cout << num << " ";
        }
        std::cout << "\n";

        count++;
    } while (std::next_permutation(order.begin(), order.end()));

    // 順列の総数を出力
    std::cout << "生成された順列数: " << count << "\n";

    // 理論上の順列数 (n!) を計算
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    std::cout << "理論上の順列数: " << factorial << "\n";

    // 確認
    if (count == factorial) {
        std::cout << "すべての順列が生成されました。\n";
    } else {
        std::cout << "順列の生成に問題があります。\n";
    }

    return 0;
}
