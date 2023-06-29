#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && a[i] == a[j]) {
                c++;
            }
        } 
        if (c == 0) {
            cout << a[i] << ' ';
        }
    }
    return 0;
}
