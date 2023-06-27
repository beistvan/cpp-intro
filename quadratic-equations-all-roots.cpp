#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x1, x2, dis;
    cin >> a >> b >> c;
    if (fabs(a) <= 0 && fabs(b) <= 0 && fabs(c) <= 0) {
        cout << 3;
    }
    else if (not fabs(a) <= 0) {
        dis = b * b - 4 * a * c;
        if (dis > 0) {
            cout << 2 << " ";
            x1 = (-b - sqrt(dis)) / (2 * a);
            x2 = (-b + sqrt(dis)) / (2 * a);
            if (x1 < x2) cout << x1 << " " << x2;
            else cout << x2 << " " << x1;
        }
        else if (fabs(dis) <= 0) { 
            cout << 1 << " ";
            if (fabs(b) <= 0) cout << 0;
            else {
                x1 = -b / (2 * a);
                cout << x1;
            }
        }
        else cout << 0;
    }
    else if (fabs(b) <= 0) cout << 0;
    else {
        cout << 1 << " ";
        if (fabs(c) <= 0) cout << 0;
        else {
            x1 = -c / b;
            cout << x1;
        }
    }
    return 0;
}
