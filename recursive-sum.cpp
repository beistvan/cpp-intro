#include <iostream>

using namespace std;

long long s = 0;

void rec(){
    long long n;
    cin >> n;
    if (n != 0) {
        s += n;
        rec();
    }
}
int main() {
    rec();
    cout << s;
    return  0;
}
