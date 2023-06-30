#include <iostream>
#include <iomanip>

using namespace std;

int a[100][100];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= m + 1; j++) {
            a[i][j] = -1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            a[i][j] = 0;
        }
    }
    int b = 0, sor = 1, oszl = 0;
    while (b < n * m) {
        while (a[sor][oszl + 1] == 0) {
            oszl++;
            b++;
            a[sor][oszl] = b;
        }
        while (a[sor + 1][oszl] == 0) {
            sor++;
            b++;
            a[sor][oszl] = b;
        }
        while (a[sor][oszl - 1] == 0) {
            oszl--;
            b++;
            a[sor][oszl] = b;
        }
        while (a[sor - 1][oszl] == 0) {
            sor--;
            b++;
            a[sor][oszl] = b;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
