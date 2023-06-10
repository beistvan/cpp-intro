#include <iostream>

using namespace std;

int main() {
	int n, m, x, y, e, w;
	cin >> n >> m >> x >> y;
	if (n > m) {
		swap(n, m);
	}
	e = n - x;
	w = m - y;
	if (min(x, y) < min(e, w)) {
		cout << min(x, y);
	}
	else {
		cout << min(e, w);
	}
	return 0;
}