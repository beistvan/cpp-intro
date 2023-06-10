#include <iostream>

using namespace std;

int main() {
    int n, a = 2;
    cin >> n;
    while (a != 1)
    {
        if (n % a == 0) {
            cout << a;
            a = 1;
        }
        else {
            a = a + 1;
        }
    }
    return 0;
}