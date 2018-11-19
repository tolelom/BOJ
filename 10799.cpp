#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	cin >> a;
	int c = 0;
	int t = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '(' && a[i + 1] == ')') {
			t += c;
			i++;
		}
		else if (a[i] == '(') {
			c++;
		}
		else if (a[i] == ')') {
			t++;
			c--;
		}
	}
	cout << t << '\n';
	//system("PAUSE");
}