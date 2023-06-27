#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n, m = 0, i = 0;
    do {
        cin >> n;
        if (n == 0) {
            break;
        }
        i++;
        m += n;
    } while (n);
    cout << fixed << setprecision(11);
    cout << m / i;
    return 0;
}
