#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, res;
	cin >> a >> b >> c >> d;
	if (a == c && b == d - 1
		|| a + 1 == c && b == d - 1
		|| a + 1 == c && b == d
		|| a + 1 == c && b == d +1
		|| a == c && b == d +1
		|| a - 1 == c && b == d + 1
		|| a - 1 == c && b == d
		|| a - 1 == c && b == d - 1)    {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}