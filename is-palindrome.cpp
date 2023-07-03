#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string c;
    c = s;
    reverse(s.begin(), s.end());
    if (s == c) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return  0;
}
