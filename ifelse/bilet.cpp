#include <iostream>
using namespace std;
int main () {
    int a, a1, a2, a3, a4, a5, a6, b1, b2;
    cin >> a;
    a1=a/100000;
    a2=(a/10000)%10;
    a3=(a/1000)%10;
    a4=(a/100)%10;
    a5=(a/10)%10;
    a6=a%10;
    b1=a1+a2+a3;
    b2=a4+a5+a6;
    if (b1==b2){
        cout << "YES";
    }
    if (b1!=b2) {
        cout << "NO";
    }
    return 0;

}