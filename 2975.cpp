#include <iostream>
using namespace std;

int main() {
	int a;
	char b;
	int c;
	while (1) {
		int temp = 0;
		cin >> a >> b >> c;
		if (a == 0 && b == 'W')
			if (c == 0)
				break;

		if (b == 'W')
			temp = a - c;
		else if (b == 'D')
			temp = a + c;

		if (temp < -200)
			cout << "Not allowed" << '\n';
		else
			cout << temp << '\n';
	}

}