#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	c += d;
	while (c >= 60) {
		b++;
		c -= 60;
	}
	while (b >= 60) {
		a++;
		b -= 60;
	}
	while (a >= 24) {
		a -= 24;
	}

	cout << a << ' ' << b << ' ' << c << '\n';
	//system("PAUSE");
}