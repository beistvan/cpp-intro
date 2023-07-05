#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int s, n;
	cin >> s >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int m = 0, c = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= s)
		{
			m = a[i];
			c++;
			for (int j = i; j < n; j++)
				if (a[j] - m >= 3)
				{
					c++;
					m = a[j];
				}
			break;
		}
	}
	cout << c;
	return 0;
}
