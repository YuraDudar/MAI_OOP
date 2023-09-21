#include "../include/solution.hpp"

namespace lab1{
    bool Solution::isChocolateCorrect(int n, int m) {
        if (n <= 0 || m <= 0) {
            return false;
        }
        return true;
    }

    int Solution::divideChocolate(int n, int m) {
        if (Solution::isChocolateCorrect(n, m)) {
            std::cout << (n - 1) + (m - 1) << '\n';
        } else {
            std::cout << 0 << '\n';
        }
    }
}