#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    double a, b, c, x1, x2, dis;
    cin >> a >> b >> c;
    dis = b * b - 4 * a * c;
    if (dis > 0) {
        x1 = (-b - sqrt(dis)) / (2 * a);
        x2 = (-b + sqrt(dis)) / (2 * a);
        if (x1 < x2) {
            cout << x1 << " " << x2;
        }
        else {
            cout << x2 << " " << x1; 
        }
    }
    else if (fabs(dis) <= 0) {
        if (fabs(b) <= 0) {
            cout << 0;
        }
        else {
            x1 = -b / (2 * a);
            cout << x1;
        }
    }
    return 0;
}
