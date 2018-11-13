#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string a, b;
		char arr1[26] = { 0, };
		char arr2[26] = { 0, };
		cin >> a >> b;
		for (int i = 0; i < a.length(); i++)
		{
			arr1[a[i] - 97]++;
		}
		for (int i = 0; i < b.length(); i++)
		{
			arr2[b[i] - 97]++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (arr1[i] != arr2[i])
			{
				cout << a << " & " << b << " are NOT anagrams." << '\n';
				break;
			}
			if (i == 25)
				cout << a << " & " << b << " are anagrams." << '\n';
		}
	}
	//system("PAUSE");
}