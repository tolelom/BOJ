#include <iostream>
using namespace std;

int main() {
	int a;
	int c = 1;
	while (1) {

		cin >> a;
		if (a == 0)
			break;
		cout << c << ". ";
		a *= 3;
		if (a % 2 == 0) {
			cout << "even";
			a = a / 2;
		}
		else {
			cout << "odd";
			a = (a + 1) / 2;
		}
		a *= 3;
		a /= 9;
		cout << ' ' << a << '\n';
		c++;
	}
}