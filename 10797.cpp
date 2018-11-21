#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int c = 0;
	for (int i = 0; i < 5; i++) {
		int b;
		cin >> b;
		if (a % 10 == b % 10)
			c++;
	}
	cout << c;
	//system("PAUSE");
}
