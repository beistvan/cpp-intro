#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, res;
	cin >> a >> b >> c >> d;
	if (abs(a - c) == abs(b - d)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}