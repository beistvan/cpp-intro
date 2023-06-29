#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> k;
        s.insert(k);
    }
    cout << s.size();
    return 0;
}
