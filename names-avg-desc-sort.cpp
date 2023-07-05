#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct tanulo {
    string nev;
    string ker;
    int matek;
    int fizika;
    int info;
};

bool cmp(tanulo a, tanulo b) {
    double temp1 = (a.matek + a.fizika + a.info) / 3.0;
    double temp2 = (b.matek + b.fizika + b.info) / 3.0;
    return temp1 > temp2 ? true : false;
}

int main() {
    int n;
    cin >> n;
    vector <tanulo> adat(n);
    for (int i = 0; i < n; i++) {
        cin >> adat[i].nev >> adat[i].ker;
        cin >> adat[i].matek >> adat[i].fizika >> adat[i].info;
    }
    stable_sort(adat.begin(), adat.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << adat[i].nev << " " << adat[i].ker << endl;
    }
    return 0;
}
