#include <iostream>
using namespace std;
int main (){
    int x, d;
    d=3;
    cin >> x;
    if (x%2==0) {
        cout << 2;
        return 0;
    }
    if (x%2!=0) {
        while (d<=x) {
            if (x%d==0) {
                cout << d;
                return 0;
            }
            d++;
        }
    }
    return 0;
}