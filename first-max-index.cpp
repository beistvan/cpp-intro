#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    int max = -2147483647;
    int imax = n, jmax = m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == max) {
                if (i <= imax) {
                    imax = i;
                    if (j <= jmax) {
                        jmax = j;
                    }
                }
            }
        }
    }
    cout << imax << ' ' << jmax;
    return  0;
}
