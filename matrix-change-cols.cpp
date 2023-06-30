#include <iostream>

using namespace std;

int main() {
    int n, m;
    int u, v, t;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> u >> v;
    for (int i = 0; i < n; i++) {
        t = a[i][u];
        a[i][u] = a[i][v];
        a[i][v] = t;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return  0;
}
