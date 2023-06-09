#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int a, b, c, d, n;
	cin >> n;
	d = n % 10;
	n /= 10;
	c = n % 10;
	n /= 10;
	b = n % 10;
	n /= 10;
	a = n % 10;
	cout << ((a - d) * (d - a) + (b - c) * (c - b)) + 1;
	return 0;
}