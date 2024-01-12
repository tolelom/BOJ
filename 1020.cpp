#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    char c;
    cin >> a >> c >> b;
    cout << setw(6) << setfill('0') << a << b << '\n';
}
