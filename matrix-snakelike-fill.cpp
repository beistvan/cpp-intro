#include <iostream>
#include <iomanip>

using namespace std;

int a[30][30];

int main() {
    int n, m, d = 1, k = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = k;
            k += d;
            cout << setw(4) << a[i][j];
        }
        k += m - d;
        d *= -1;
        cout << endl;
    }
    return  0;
}
