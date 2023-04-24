#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n,s;
    cin >> n;
    s=0;
    for (int i=1; i<=n ; i++ ) {
    s = s + pow(i,2);
    }
    cout << s;
}