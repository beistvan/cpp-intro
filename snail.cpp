#include <iostream>

using namespace std;

int main() {
    int h, a, b, c;
    cin >> h >> a >> b;
    c = a - b;
    cout << ((h - b) + c - 1) / c;
    return 0;
}