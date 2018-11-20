#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, e, d;
	cin >> a >> b >> c >> d >> e;
	int ham = min(a, b);
	ham = min(ham, c);
	int coke = min(d, e);
	cout << ham + coke - 50 << '\n';
	//system("PAUSE");
}