#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
using ll = long long;

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  cout << a + b + c << '\n';
  cout << fixed;
  cout.precision(1);
  cout << (a + b + c) / 3 << '\n';
}
