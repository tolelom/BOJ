#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  int a, b, c;
  char d;
  cin >> a >> d >> b >> d >> c;
  cout << setw(2) << setfill('0') << c << '-';
  cout << setw(2) << setfill('0') << b << '-';
  cout << setw(4) << setfill('0') << a << '\n';
}