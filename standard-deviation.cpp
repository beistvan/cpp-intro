#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double n = -1, x = -1, s, sum = 0, k = 0, r;
    while (n) {
        cin >> n;
        sum = sum + n;
        x = x + 1;
        k = k + n * n;
    }
    s = sum / x;
    r = sqrt((k + x * s * s - 2 * sum * s) / (x - 1));
    cout << fixed << setprecision(11);
    cout << r;
    return 0;
}
