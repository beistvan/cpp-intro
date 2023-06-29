#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m = (n % 2 ? n - 1 : n);
    for (int i = 1; i < m; i += 2) {
        swap(a[i], a[i - 1]);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
