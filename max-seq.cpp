#include <iostream>

using namespace std;

int main() {
	int n, max = 1, c = 1, e;
	cin >> e;
	do {
		cin >> n;
		if (e == n) {
			c++;
		}
		else {
			if (c > max) {
				max = c;
			}
			c = 1;
		}
		e = n;
	} while (n);
	cout << max;
	return 0;
}