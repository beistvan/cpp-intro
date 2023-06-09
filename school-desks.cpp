#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << a / 2 + a % 2 + b / 2 + b % 2 + c / 2 + c % 2;
    return 0;
}