#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, j = 2;
	cin >> n;

	for (int i = 0; i < n; i++) {

		j += pow(2, i);
	}

	cout << j * j;

	//system("PAUSE");
}