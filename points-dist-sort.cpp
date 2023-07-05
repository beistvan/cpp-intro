#include <iostream>
#include <utility>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

struct coord {
    int x;
    int y;
    double tav;
};

bool cmp(coord a, coord b) {
    return a.tav < b.tav;
}

int main() {
    int n;
    cin >> n;
    vector<coord> coordinate(n);
    for (int i = 0; i < n; i++) {
        int tempx, tempy;
        coord temp;
        cin >> tempx >> tempy;
        temp.x = tempx;
        temp.y = tempy;
        temp.tav = hypot(abs(tempx), abs(tempy));
        coordinate[i] = temp;
    }
    sort(coordinate.begin(), coordinate.end(), cmp);
    for (auto now : coordinate) {
        cout << now.x << " " << now.y << endl;
    }
    return 0;
}
