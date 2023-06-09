#include <iostream>

using namespace std;

int main() {
    int h1, h2, m1, m2, s1, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    h1 = h1 * 3600;
    m1 = m1 * 60;
    h2 = h2 * 3600;
    m2 = m2 * 60;
    cout << (h2 + m2 + s2) - (h1 + m1 + s1);
    return 0;
}