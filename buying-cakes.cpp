#include <iostream>

int main() {
    int a, b, n;
    std::cin >> a >> b >> n;
    int k = (a * 100 + b) * n;
    std::cout << k / 100 << " " << k % 100;
    return 0;
}