#include <iostream>
using namespace std;
int main () {
    int m1, m2, m3;
    cin >> m1 >> m2 >> m3;
    if (m1 >= 727 ||m2 >= 727 ||m3 >= 727 || m1<= 94 || m2<= 94 ||m3<= 94 ) {
        cout << "Error";
        return 0;
    }
    else if (m1>=m2 && m1>= m3) {
        cout << m1;
        return 0;
    }

    else if (m2>=m3 && m2>=m1) {
        cout << m2;
        return 0;
    }

    else if (m3>=m2 && m2>=m1) {
        cout << m3;
        return 0;
    }

    return 0;
}