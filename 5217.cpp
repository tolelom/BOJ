#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int c = 0;
		int k;
		cin >> k;
		cout << "Pairs for " << k << ": ";
		for (int i = 1; i < 11; i++) {
			for (int j = i + 1; j < 12; j++) {
				if (i + j == k) {
					if (c != 0)
						cout << ", ";
					cout << i << ' ' << j;
					c++;
				}
			}
		}
		cout << '\n';
	}
}