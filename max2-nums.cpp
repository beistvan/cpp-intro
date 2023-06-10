#include <iostream>

using namespace std;

int main() {
	int n, max1 = -1, max2 = -1;
	do {
		cin >> n;
		if (n > max1) {
			max2 = max1;
			max1 = n;
		}
		else if (n > max2) {
			max2 = n;
		}
	} while (n);
	cout << max2;
	return 0;
}