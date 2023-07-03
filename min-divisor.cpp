#include <iostream>
#include <cmath>

using namespace std;

int MinDivisor(int n) {
    int div = 3;
    if (n % 2 == 0) {
        return 2;
    }
    while (div <= sqrt(n)) {
        if (n % div == 0) {
            return div;
        }
        div += 2;
    }
    return n;
}
int main() {
    int n;
    cin >> n;
    cout << MinDivisor(n);
    return  0;
}
