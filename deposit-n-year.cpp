#include <iostream>

using namespace std;

int main() {
    int p, x, y, k, l, i = 0;
    cin >> p >> x >> y >> k;
    while (i < k) {
        l = x * p % 100;
        x = x + x * p / 100;
        y = y + y * p / 100 + l;
        x = x + y / 100;
        y = y % 100;
        i++;
    }
    cout << x << " " << y;
    return 0;
}
