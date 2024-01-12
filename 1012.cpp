#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float f;
    cin >> f;

    cout << fixed;
    cout.precision(6);
    cout << f << '\n';
}
