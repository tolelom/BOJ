#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int tc;
	int c = 0;
	cin >> tc;
	while (tc--) {
		string a;
		stack<char> b;
		cin >> a;
		for (int i = 0; i < a.length(); i++) {
			if (b.empty() || a[i] != b.top()) {
				b.push(a[i]);
			}
			else {
				b.pop();
			}
		}
		if (b.empty())
			c++;

	}
	cout << c << '\n';
	//system("PAUSE");
}