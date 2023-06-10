#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, res;
    cin >> a >> b >> c >> d;
    if (  a + 1 == c && b - 2 == d
       || a + 2 == c && b - 1 == d
       || a + 2 == c && b + 1 == d
       || a + 1 == c && b + 2 == d
       || a - 1 == c && b + 2 == d
       || a - 2 == c && b + 1 == d
       || a - 2 == c && b - 1 == d
       || a - 1 == c && b - 2 == d  )
    {
       cout << "YES";
    }
    else
    {
	cout << "NO";
    }
    return 0;
}