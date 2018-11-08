#include <iostream>
#include <string>

using namespace std;

int main()
{
	char a[101] = { 0, }; //배열을 쓸 떈 꼭 초기화를!
	cin >> a;
	for (int i = 0; i < 101; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			cout << a[i];
		}
	}
	//system("PAUSE");
}