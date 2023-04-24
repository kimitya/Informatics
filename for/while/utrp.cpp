#include <iostream>
using namespace std;
int main (){
    int x,y, d, x1;
    cin >> x;
    cin >>y;
    d=1;
    x1=x;
    while (x1<=y) {
        x1=((10*x)/100)+x;
        d++;
        x=x1;
        if (x1>y) {
            return 0;
        }
    }
    cout << d;
}