#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, e, f, D, Dx, Dy, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    D = a * d - c * b;
    Dx = e * d - f * b;
    Dy = a * f - c * e;
    if (not fabs(D) <= 0) {
        x = Dx / D;
        y = Dy / D;
        cout << 2 << " " << x << " " << y;
    }
    else {
        if (fabs(a) + fabs(b) + fabs(c) + fabs(d) <= 0) {
            if (fabs(e) + fabs(f) <= 0) {
                cout << 5;
            }
            else {
                cout << 0;
            }
        }
        else if ((not fabs(Dx) <= 0) || (not fabs(Dy) <= 0)) {
            cout << 0;
        }
        else if (b == 0) {
            if (not fabs(a) <= 0) {
                cout << 3 << " " << e / a;
            }
            else if (fabs(d) <= 0) {
                cout << 3 << " " << f / c;
            }
            else if (fabs(c) <= 0) {
                cout << 4 << " " << f / d;
            }
            else {
                cout << 1 << " " << -c / d << " " << f / d;
            }
        }
        else if (a == 0) {
            if (not fabs(b) <= 0) {
                cout << 4 << " " << e / b;
            }
            else if (fabs(d) <= 0) { 
                cout << 3 << " " << f / c;
            }
            else if (fabs(c) <= 0) {
                cout << 4 << " " << f / d;
            }
            else {
                cout << 1 << " " << -c / d << " " << f / d;
            }
        }
        else {
            cout << 1 << " " << -a / b << " " << e / b;
        }
    }
    return 0;
}
