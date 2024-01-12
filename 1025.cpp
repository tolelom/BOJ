#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int a;
  cin >> a;
  
  for (int i = 4; i >= 0; --i) {
    int n = pow(10, i);
    cout << '[' << (a / n) * n << ']' << '\n';
    a %= n;
  }
}
