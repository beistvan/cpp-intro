#include <iostream>

using namespace std;

int main() {
	int  i = 1, n, m = 1;
	cin >> n;
	while (m <= n) {
		cout << m << " ";
		i++;
		m = i * i;
	}
}