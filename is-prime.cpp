#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n) {
    int min = 1;
    int sqrtn = sqrt((double)n);
    for (int i = 2; i <= sqrtn; i++) {
        if (n % i == 0) {
            min = i;
            break;
        }
    }
    if (min == 1) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    double n;
    cin >> n;
    cout << (IsPrime(n) ? "YES" : "NO");
    return  0;
}
