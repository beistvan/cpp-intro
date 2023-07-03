#include <iostream>

using namespace std;

double power(double a, double n) {
    double res;
    if (n == 0) {
        res = 1;
    }
    else if (n == 1)  {
        res = a;
    }
    else if (n < 0) {
        return (1 / a) * power(a, ++n);
    }
    else {
        res = a * power(a, n - 1);
    }
    return res;
}
int main() {
    double a, n;
    cin >> a >> n;
    cout << power(a, n);
    return  0;
}
