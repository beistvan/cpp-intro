#include <iostream>
#include <cmath>

using namespace std;

bool isPointInSquare(double x, double y, double xc, double yc, double r) {
    return (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r ;
}

int main() {
    double x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    cout << (isPointInSquare(x, y, xc, yc, r) ? "YES" : "NO");
    return  0;
}
