#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, count = 0;
	string a;
	cin >> n >> a;
	for (int i = 0; i < n; i++)
		if (a[i] == 'L')
			count++;
	if (count != 0)
		count = (count - 2) / 2;
	cout << n - count;
	//system("PAUSE");
}