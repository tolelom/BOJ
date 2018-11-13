#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	char arr[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((j + i) % 2 == 0)
				if (arr[i][j] == 'F')
					count++;
		}
	}
	cout << count;
	//system("PAUSE");
}