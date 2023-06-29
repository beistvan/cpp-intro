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
    int min = 2147483647;
    bool voltmin = false;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0 && a[i] <= min) {
            min = a[i];
            voltmin = true;
        }
    }
    cout << (voltmin ? min : 0);
    return 0;
}
