#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    int x = 0;

    for (int i = 0; i < n; ++i) {
        std::string statement;
        std::cin >> statement;

        if (statement == "++X" || statement == "X++") {
            x++;
        } else if (statement == "--X" || statement == "X--") {
            x--;
        }
    }

    std::cout << x << std::endl;
    return 0;
}
