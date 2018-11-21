#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}

	cout << a * (b - 1) + (a - 1);
	//system("PAUSE");
}