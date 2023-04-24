#include <iostream>
using namespace std;
int main () {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    while (a<=b) {
        if (a%d==c){
            cout << a << " ";
        }
        a++;
    }
}