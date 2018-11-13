#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[26] = { 0, };
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		arr[a[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}
	//system("PAUSE");
}