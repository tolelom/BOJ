#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int c = 1;
	int t = 0;
	while (a--) {
		int b;
		cin >> b;
		if (b == 1) {
			t += c;
			c++;
		}
		else
			c = 1;
	}
	cout << t;
	//system("PAUSE");
}