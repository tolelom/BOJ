#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[5];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	sort(arr, arr + 5);
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	sum /= 5;
	cout << sum << '\n' << arr[2];
	//system("PAUSE");
}