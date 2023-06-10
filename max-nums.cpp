#include <iostream>

using namespace std;

int main() {
	int n, max = -1;
	do {
		cin >> n;
		if (n > max) {
			max = n;
		}
	} while (n);
	cout << max;
	return 0;
}