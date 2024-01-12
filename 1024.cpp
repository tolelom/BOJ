#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  for (auto it : s)
    cout << '\'' << it << '\'' << '\n';
}