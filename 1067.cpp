#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
  int n; 
  cin >> n;
  if (0 < n) cout << "plus\n";
  else cout << "minus\n";
  if (n % 2) cout << "odd\n";
  else cout << "even\n";
}
