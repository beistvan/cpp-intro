#include <iostream>
#include <cmath>

using namespace std;

bool isPointInSquare(double x, double y) {
    return x >= -1.0 && x <= 1.0 && y >= -1.0 && y <= 1.0;
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << (isPointInSquare(x, y) ? "YES" : "NO");
    return  0;
}
