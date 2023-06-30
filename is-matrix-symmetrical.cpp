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
    string val = "YES";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                val = "NO";
                break;
            }
        }
    }
    cout << val;
    return  0;
}
