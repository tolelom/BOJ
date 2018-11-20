#include <iostream>
using namespace std;

int main() {
	long long  a, b;
	cin >> a >> b;
	if (a == b)
		cout << 0;
	else if (a > b) {
		cout << a - b - 1 << '\n';
		for (int i = 1; i < (a - b); i++) {
			cout << b + i << ' ';
		}
	}
	else {
		cout << b - a - 1 << '\n';
		for (int i = 1; i < (b - a); i++) {
			cout << a + i << ' ';
		}
	}
	//system("PAUSE");
}