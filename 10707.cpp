#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;
	if (P > C)
		cout << min(A*P, B + (P - C)*D);
	else
		cout << min(A*P, B);
	//system("PAUSE");
}