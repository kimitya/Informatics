#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int i=2;
    while (i<=n) {
        if (n%i==0) {
            cout << i;
            return 0;
        }
        else i++;
    }
    return 0;
}