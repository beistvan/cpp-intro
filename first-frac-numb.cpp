#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a;
	cin >> a;
	a = a - (long)a;
	cout << floor(a * 10);
	return 0;
}
