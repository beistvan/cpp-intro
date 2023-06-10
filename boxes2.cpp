#include <iostream>
using namespace std;
int main()
{
    int x, y, z, m, n, k;
    cin >> x >> y >> z >> m >> n >> k;
    if (((x == m) && (y == n) && (z == k))
        || ((x == m) && (y == k) && (z == n))
        || ((x == n) && (y == k) && (z == m))
        || ((x == n) && (y == m) && (z == k))
        || ((x == k) && (y == m) && (z == n))
        || ((x == k) && (y == n) && (z == m))) {
        cout << "Boxes are equal";
    }
    else if (((x >= m) && (y >= n) && (z >= k))
        || ((x >= m) && (y >= k) && (z >= n))
        || ((x >= n) && (y >= k) && (z >= m))
        || ((x >= n) && (y >= m) && (z >= k))
        || ((x >= k) && (y >= m) && (z >= n))
        || ((x >= k) && (y >= n) && (z >= m))) {
        cout << "The first box is larger than the second one";
    }
    else if (((x <= m) && (y <= n) && (z <= k))
        || ((x <= m) && (y <= k) && (z <= n))
        || ((x <= n) && (y <= k) && (z <= m))
        || ((x <= n) && (y <= m) && (z <= k))
        || ((x <= k) && (y <= m) && (z <= n))
        || ((x <= k) && (y <= n) && (z <= m))) {
        cout << "The first box is smaller than the second one";
    }
    else {
        cout << "Boxes are incomparable";
    }
    return 0;
}