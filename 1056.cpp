#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
  bool a, b;
  cin >> a >> b;
  
  if (a ^ b) cout << 1 << '\n';
  else cout << 0 << '\n';
}
