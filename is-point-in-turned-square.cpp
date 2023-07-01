#include <iostream>
#include <cmath>

using namespace std;

bool isPointInSquare(double x, double y) {
    return y <= -x + 1 && y >= -x - 1 && y <= x + 1 && y >= x - 1;
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << (isPointInSquare(x, y) ? "YES" : "NO");
    return  0;
}
