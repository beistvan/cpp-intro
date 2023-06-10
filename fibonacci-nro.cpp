#include <iostream>

using namespace std;

int main() {
	long long n, fn = 1, f1 = 0, f2 = 1, k = 1;
	cin >> n;
	while (fn < n) {
		fn = f1 + f2;
		f2 = f1;
		f1 = fn;
		k++;
	}
	cout << (fn > n ? -1 : k - 1);
	return 0;
}