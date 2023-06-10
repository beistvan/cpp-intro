#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (b > a) {
		swap(b, a);
	}
	if (c > a) {
		swap(c, a);
	}
	if (c > b) {
		swap(c, b);
	}
	cout << c << " " << b << " " << a;
}