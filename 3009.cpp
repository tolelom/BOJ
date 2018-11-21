#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	int c, d;
	for (int i = 0; i < 2; i++) {
		cin >> c >> d;
		if (a != c)
			a += c;
		else
			a = 0;
		if (b != d)
			b += d; \
		else
			b = 0;
	}
	cin >> c >> d;
	if (a != 0)
		a -= c;
	else
		a += c;
	if (b != 0)
		b -= d;
	else
		b += d;
	cout << a << ' ' << b;
	//system("PAUSE");
}
