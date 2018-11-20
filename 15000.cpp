#include <iostream>
using namespace std;

int main() {
	char a[1000000];
	cin >> a;
	for (int i = 0; a[i] != '\0'; i++) {
		cout << (char)(a[i] - 32);
	}
	//system("PAUSE");
}