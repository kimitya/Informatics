#include <iostream>
using namespace std;
int main (){
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    b1=a1+a2;
    b2=a1+a3;
    b3=a3+a2;
    if (b1==a3 || b2==a2 || b3==a1 ) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}