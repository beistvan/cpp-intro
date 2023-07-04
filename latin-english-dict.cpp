#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s, key, szo;
    map<string, vector<string>> mszotar;
    for (int i = 0; i <= n; i++) {
        getline(cin, s);
        replace(s.begin(), s.end(), '-', ' ');
        replace(s.begin(), s.end(), ',', ' ');
        stringstream sszok(s);
        sszok >> key;
        while (sszok >> szo) {
            mszotar[szo].push_back(key);
        }
    }
    cout << mszotar.size() << endl;
    for (auto aszo : mszotar) {
        cout << aszo.first << " - ";
        int m = aszo.second.size();
        for (auto szavak : aszo.second) {
            cout << szavak << (szavak == aszo.second[m - 1] ? "\n" : ", ");
        }
    }
    return 0;
}
