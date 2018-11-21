#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	int c = 0;
	while (tc--) {
		int a, b;
		cin >> a >> b;
		c += b % a;
	}
	cout << c;
	//system("PAUSE");
}
