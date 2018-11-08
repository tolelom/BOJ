#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	cin >> a;
	int J = 0, I = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'J')
		{
			if (a[i + 1] == 'O' && a[i + 2] == 'I')
				J++;
		}
		if (a[i] == 'I')
		{
			if (a[i + 1] == 'O' && a[i + 2] == 'I')
				I++;
		}
	}
	cout << J << '\n' << I;
	//system("PAUSE");

}