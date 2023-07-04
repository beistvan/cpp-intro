#include <iostream>
#include <set>

using namespace std;

int main(){
	set <int> s1, s2, s3;
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		s1.insert(a);
	}
	int k = 0;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a;
		cin >> a;
		s2.insert(a);
		if (s1.find(a) != s1.end())
			s3.insert(a);
	}
	set <int>::iterator j;
	for (j = s3.begin(); j != s3.end(); j++)
		cout << *j << ' ';
	return 0;
}
