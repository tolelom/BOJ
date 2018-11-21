#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int c = 0, d = 0, e = 0, f = 0;
	c = a * (b % 10);
	f += c;
	b /= 10;

	d = a * (b % 10);
	f += d * 10;
	b /= 10;

	e = a * b;
	f += e * 100;

	cout << c << '\n' << d << '\n' << e << '\n' << f;

	//system("PAUSE");
}