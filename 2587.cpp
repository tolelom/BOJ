#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tc = 5, count = 0;
	bool arr[5] = { 0, };
	while (tc--)
	{
		string a;
		cin >> a;
		for (int i = 0; i < a.length() - 2; i++)
		{
			if (a[i] == 'F' &&a[i + 1] == 'B')
				if (a[i + 2] == 'I')
				{
					arr[4 - tc] = 1;
					count++;
				}

		}
	}
	if (count == 0)
		cout << "HE GOT AWAY!";
	else
	{
		for (int i = 0; i < 5; i++)
			if (arr[i] == 1)
				cout << i + 1 << " ";
	}
	//system("PAUSE");
}