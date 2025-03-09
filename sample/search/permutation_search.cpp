#include <iostream>
#include <vector>
#include <algorithm> // next_permutation
#include <numeric>   // iota

int main() {
    int n = 4; // ����̗v�f��
    std::vector<int> order(n);
    std::iota(order.begin(), order.end(), 1); // {1, 2, 3, ..., n} �𐶐�

    std::cout << "����:\n";
    int count = 0;

    do {
        // ���݂̏�����o��
        for (int num : order) {
            std::cout << num << " ";
        }
        std::cout << "\n";

        count++;
    } while (std::next_permutation(order.begin(), order.end()));

    // ����̑������o��
    std::cout << "�������ꂽ����: " << count << "\n";

    // ���_��̏��� (n!) ���v�Z
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    std::cout << "���_��̏���: " << factorial << "\n";

    // �m�F
    if (count == factorial) {
        std::cout << "���ׂĂ̏��񂪐�������܂����B\n";
    } else {
        std::cout << "����̐����ɖ�肪����܂��B\n";
    }

    return 0;
}
