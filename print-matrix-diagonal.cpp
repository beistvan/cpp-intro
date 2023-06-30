#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (i - k >= 0 && i - k < n) {
            cout << a[i][i - k] << ' ';
        }
    }
    return  0;
}
