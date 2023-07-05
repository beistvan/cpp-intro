#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct racer{
    int pont, szam;
};

bool cmp(racer a, racer b) {
    if (a.pont != b.pont) {
        return a.pont > b.pont;
    }
    return a.szam < b.szam;
}

int main() {
    int n;
    cin >> n;
    vector<racer> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].szam >> a[i].pont;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto now:a) {
        cout << now.szam << ' ' << now.pont << endl;
    }
    return 0;
}
