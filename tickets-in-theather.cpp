#include <iostream>

using namespace std;

int a[20][20];

int main() {
    int n, m, k, u = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                c++;
                if (c == k) {
                    u = i + 1;
                    break;
                }
            }
            else { 
                c = 0;
            }
        }
        if (c == k) {
            break;
        }
    }
    cout << u;
    return 0;
}
