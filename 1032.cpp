#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	string a, b;
	cin >> a;
	for (int i = 1; i < tc; i++) {
		cin >> b;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] != b[j])
				a[j] = '?';
		}
	}
	cout << a;

	//system("PAUSE");
}
