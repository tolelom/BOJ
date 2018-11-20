#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int a;
		int sum = 0;
		cin >> a;
		for (int i = 1; i <= a; i += 2) {
			sum += i;
		}
		cout << sum << '\n';
	}
	//system("PAUSE");
}