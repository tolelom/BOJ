#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
  int n; 
  cin >> n;
  if (n % 12 < 3) cout << "winter\n";
  else if (n % 12 < 6) cout << "spring\n";
  else if (n % 12 < 9) cout << "summer\n";
  else cout << "fall\n";
}
