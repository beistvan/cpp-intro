#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {
    int n, h = 0;
    cin >> n;
    string s, szo, m;
    map<string, vector<string>> szotar;
    vector<string> mondat;
    for (int i = 0; i < n; i++) {
        cin >> s;
        szo = s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        szotar[s].push_back(szo);
    }
    while (cin >> s) {
        m = s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        bool v = szotar.count(s) > 0;
        if (n != 0 && v) {
            bool van = false;
            for (auto szo : szotar[s]) {
                if (szo == m) {
                    van = true;
                }
            }
            if (!van) {
                h++;
            }
        }
        else {
            int k = 0;
            for (auto b : m) {
                if (b >= 'A' && b <= 'Z') {
                    k++;
                }
            }
            if (k != 1) {
                h++;
            }
        }
    }
    cout << h;
    return 0;
}
