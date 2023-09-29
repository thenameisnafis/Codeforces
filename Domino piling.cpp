#include <iostream>

int main() {
    int M, N;
    std::cin >> M >> N;

    // Calculate the total number of squares and divide by 2
    int totalSquares = M * N;
    int maxDominoes = totalSquares / 2;

    std::cout << maxDominoes << std::endl;

    return 0;
}
