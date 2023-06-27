#include <iostream>

using namespace std;

int main() {
	int n;
	double a, x, p;
	cin >> n;
	cin >> x;
	cin >> p;
	for (int i = 0; i < n; i++) {
		cin >> a;
		p = p * x + a;
	}
	cout << p;
	return 0;
}
