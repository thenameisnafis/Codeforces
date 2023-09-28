#include <iostream>
 
int main() {
    int w;
    std::cin >> w;
 
    // Check if it's possible to divide the watermelon into two even parts.
    if (w >= 4 && w % 2 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
 
    return 0;
}
