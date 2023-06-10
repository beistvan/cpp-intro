#include <iostream>

using namespace std;

int main() {
	int c = 0, e, a, k;
	cin >> e >> a;
	if (a == 0) {
		cout << 0;
	}
	else {
		do {
			cin >> k;
			if (k != 0 && e < a && a > k) {
				c++;
			}
			e = a;
			a = k;
		} while (k);
		cout << c;
	}
	return 0;
}