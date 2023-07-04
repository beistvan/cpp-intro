#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map <string, string> m;
    int n;
    string x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string u, v;
        cin >> u >> v;
        m[u] = v;
    }
    cin >> x;
    for (auto s : m) {
        if (s.second == x) {
            cout << s.first;
            break;
        } 
        if (s.first == x) {
            cout << s.second;
            break;
        }
    }
    return  0;
}
