#include <iostream>
#include <iomanip>

using namespace std;

int a[100][100];

int main() {
    int n, m, c = 1, v = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v > 0) {
                a[i][j] = c++;
            }
            else {
                a[i][j] = 0;
            }
            v *= -1;
        }
        if (m % 2 == 0) {
            v *= -1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    return  0;
}
