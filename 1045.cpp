#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
using ll = long long;

int main() {
  ll a, b;;
  cin >> a >> b;
  cout << a + b << '\n';
  cout << a - b << '\n';
  cout << a * b << '\n';
  cout << a / b << '\n';
  cout << a % b << '\n';
  cout << fixed;
  cout.precision(2);
  cout << (double)a / b << '\n';
}