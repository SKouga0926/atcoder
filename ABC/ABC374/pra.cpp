#include <iostream>
#include <vector>

void bitFullSearch(const std::vector<int>& elements) {
    int n = elements.size();
    
    // 2^n 通りの全ての部分集合を探索する
    for (int bit = 0; bit < (1 << n); ++bit) {
        std::vector<int> subset;
        
        for (int i = 0; i < n; ++i) {
            // ビットが立っている（選ばれている）場合、要素を選ぶ
            if (bit & (1 << i)) {
                subset.push_back(elements[i]);
            }
        }
        
        // 部分集合を出力
        std::cout << "{ ";
        for (int elem : subset) {
            std::cout << elem << " ";
        }
        std::cout << "}" << std::endl;
    }
}

int main() {
    std::vector<int> elements = {1, 2, 3};  // 対象の配列
    bitFullSearch(elements);
    
    return 0;
}
