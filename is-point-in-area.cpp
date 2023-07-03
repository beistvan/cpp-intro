#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInArea(double x, double y) {
    return ((y >= -x) && (y >= 2 * x + 2) && ((x + 1) * (x + 1) + (y - 1) * (y - 1) <= 2 * 2)) || ((y <= -x) && (y <= 2 * x + 2) && ((x + 1) * (x + 1) + (y - 1) * (y - 1) >= 2 * 2));
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << (IsPointInArea(x, y) ? "YES" : "NO");
    return  0;
}
