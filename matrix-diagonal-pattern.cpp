#include <iostream>
#include <iomanip>

using namespace std;

int a[30][30];

int main() {
    int n, m, c = 1;
    cin >> n >> m;
    for (int d = 0; d < n + m - 1; d++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + j == d) {
                    a[i][j] = c++;
                }
            }
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
