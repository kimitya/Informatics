#include <iostream>
using namespace std;
int main () {
    int a, b, c, d, give, need, sdacha, sdachar, sdachak;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    need=(a*100)+b;
    give=(c*100)+d;
    sdacha=give-need;
    sdachar=sdacha/100;
    sdachak=sdacha%100;
    cout << sdachar << " "<< sdachak;
    return 0;



}