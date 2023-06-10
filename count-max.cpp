#include <iostream>

using namespace std;

int main() {
	int n, max = -1, c = 0;
	do {
		cin >> n;
		if (n > max) {
			max = n;
			c = 1;
		} else  if (n == max){
			c++;
		}
	} while (n);
	cout << c;
	return 0;
}