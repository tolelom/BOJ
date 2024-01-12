#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  double d;
  cin >> d;
  
  cout << fixed;
  cout.precision(11);
  cout << d << '\n';
}