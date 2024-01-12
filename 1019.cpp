#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int y, m, d;
    char dot;
    cin >> y >> dot >> m >> dot >> d;
    cout << setw(4) << setfill('0') << y << dot;
    cout << setw(2) << setfill('0') << m << dot << setw(2) << setfill('0') << d << '\n';
}
