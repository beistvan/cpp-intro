#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, l, r;
    cin >> n >> k;
    vector <char> t(n);
    fill(t.begin(), t.end(), 'I');
    for (int i = 0; i < k; i++) {
        cin >> l >> r;
        for (int j = l - 1; j <= r - 1; j++) {
            t[j] = '.';
        }
    }
    for (int i = 0; i < n; i++) {
        cout << t[i];
    }
    return 0;
}
