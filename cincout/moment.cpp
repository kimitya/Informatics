#include <iostream>
using namespace std;
int main (){
    int a1, b1, c1, a2, b2, c2, d1, d2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    d1=(a1*3600)+(b1*60)+c1;
    d2=(a2*3600)+(b2*60)+c2;
    cout << d2-d1;

    return 0;
    


}