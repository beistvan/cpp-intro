#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::cout << n + (2 - abs(n) % 2);
    return 0;
}