#include <iostream>
#include <cmath>

using namespace std;

double distance(double a, double b, double c, double d) {
    return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << distance(a, b, c, d);
    return  0;
}
