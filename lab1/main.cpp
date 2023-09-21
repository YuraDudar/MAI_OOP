#include "include/solution.hpp"

int main(){
    int n, m;
    std::cout << "Enter the size of the chocolate bar (n x m): ";
    std::cin >> n >> m;
    lab1::Solution::divideChocolate(n, m);
}