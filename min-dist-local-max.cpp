#include <iostream>

using namespace std;

int main() {
	int c = 0, e, a, k, min = 2147483647, g = 2, ge = 0;
	cin >> e >> a;
	if (a == 0) {
		cout << 0;
	}
	else {
		do {
			cin >> k;
			if (k != 0 && e < a && a > k) {
				c++;
				if (ge == 0) {
					ge = g;
				}
				if (g != ge && g - ge < min) {
					min = g - ge;
				}
				ge = g;
			}
			e = a;
			a = k;
			g++;
		} while (k);
		cout << (min == 2147483647 ? 0 : min);
	}
	return 0;
}