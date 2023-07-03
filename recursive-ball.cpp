#include <iostream>

using namespace std;

int ball(int m,int n) {
    return ((m <= 1 || n < 1) ? 0 : 1 + ball(m - n, n + 1));
}

int main() {
    int m;
    cin >> m;
    cout << ball(m, 1);
    return 0;
}
