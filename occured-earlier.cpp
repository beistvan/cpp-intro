#include <iostream>
#include <set>

using namespace std;

int main() {
    set <int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (s.find(x) == s.end()) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
        s.insert(x);
    }
    return  0;
}
