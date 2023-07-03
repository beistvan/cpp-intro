#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int k = 1;
    int pos = 0;
    getline(cin, s);
    while ((pos = s.find(" ", pos)) != string::npos) {
        pos++;
        k++;
    }
    cout << k;
    return  0;
}
