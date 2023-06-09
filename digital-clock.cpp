#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	unsigned long n, h, m, s;
	cin >> n;
	n = n % (3600 * 24);
	s = n % 60;
	n = n / 60;
	m = n % 60;
	n = n / 60;
	h = n % 60;

	cout << h << ':';
	cout << setw(2) << setfill('0') << m << ':';
	cout << setw(2) << setfill('0') << s;
	return 0;
}