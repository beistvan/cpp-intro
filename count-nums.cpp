#include <iostream>

using namespace std;

int main() {
	int n, k = 0;
	do {
		cin >> n;
		k++;
	} while (n);
	cout << k - 1;
	return 0;
}