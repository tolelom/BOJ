#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int x1, y1, x2, y2, r1, r2, T;
	cin >> T;
	while (T--)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2)
				cout << -1 << '\n';
			else
				cout << 0 << '\n';
		}
		else
		{
			double r = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
			if ((r1 + r2) < r)
				cout << 0 << '\n';
			else if ((r1 + r2) == r)
				cout << 1 << '\n';
			else if (max(r1, r2) - min(r1, r2) == r)
				cout << 1 << '\n';
			else if (min(r1, r2) + r < max(r1, r2))
				cout << 0 << '\n';
			else
				cout << 2 << '\n';
		}
	}
}
