#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
  int n; 
  cin >> n;
  if (90 <= n) cout << "A\n";
  else if (70 <= n) cout << "B\n";
  else if (40 <= n) cout << "C\n";
  else  cout << "D\n";
}
