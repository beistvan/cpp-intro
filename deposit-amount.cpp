#include <iostream>

using namespace std;

int main() {
    int p, x, y, l;
    cin >> p >> x >> y;
    l = x * p % 100;
    x = x + x * p / 100;
    y = y + y * p / 100 + l;
    x = x + y / 100;
    y = y % 100;
    cout << x << " " << y;
    return 0;
}
