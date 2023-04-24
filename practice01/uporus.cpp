#include <iostream>
using namespace std;
int main () {
    int a, b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a<=b && b<=c) {
        cout << a << " " << b << " " << c;
        return 0;
    }
    if (a<=c && c<=b) {
        cout << a << " " << c << " " << b;
        return 0;
    }
    if (b<=a && a<=c ) {
        cout << b << " " << a << " " << c;
        return 0;
    }
    if (b<=c && c<=a) {
        cout << b << " " << c << " " << a;
        return 0;
    }
    if (c<=a && a<=b) {
        cout << c << " " << a << " " << b;
        return 0;
    }
    if (c<=b && b<=a) {
        cout << c << " " << b << " " << a;
        return 0;
    }
}
