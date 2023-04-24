#include <iostream>
using namespace std;
int main () {
    int v, t, l, s;
    cin >> v;
    cin >> t;
    s=v*t;
    l=109;

    if (v>0) {
        cout << s%l;
    }


    if (v<0) {
        cout << l-s;
    }

    return 0;
}