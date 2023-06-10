#include <iostream>

using namespace std;

int main() {
	int n, f, f1 = 1, f2 = 1;
	cin >> n;
	if (n == 0) {
		cout << 0;
	}
	else if (n == 1 || n == 2) {
		cout << 1;
	}
	else {
		while (n != 2) {
			f = f1 + f2;
			f2 = f1;
			f1 = f;
			n--;
		}
		cout << f;
	}

	return 0;
}