#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	b += c;
	while (b >= 60) {
		a++;
		b -= 60;
	}
	while (a >= 24) {
		a -= 24;
	}

	cout << a << ' ' << b << '\n';
	//system("PAUSE");
}