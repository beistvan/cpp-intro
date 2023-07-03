#include <iostream>

using namespace std;

int main() {
    char s;
    cin >> s;
    if (s >= 'a' && s <= 'z') {
        s = s - 32;
    }
    else if (s >= 'A' && s <= 'Z') {
        s = s + 32;
    } else if (s != 'a' && s!= 'z' && s != 'A' && s != 'Z'){
    }
    cout << s;
}
