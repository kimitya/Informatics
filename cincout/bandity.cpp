#include <iostream>
using namespace std;
int main () {
    int g, l, b, g1, l1;
    cin >> g >> l;
    b=(g+l)-1;
    l1=b-l;
    g1=b-g;
    cout << g1 << " " << l1;
    return 0;
}