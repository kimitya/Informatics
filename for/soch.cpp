#include <iostream>
using namespace std;
int main () {
    int n, k, n1, k1, r, r1, c2, c;
    cin >> n;
    cin >> k;
    n1=1;
    k1=1;
    r=n-k;
    r1=1;
    for (int i=1; i<=n; i++) {
        n1=n1*i;    
    }
    for (int i=1; i<=k; i++) {
        k1=k1*i;
    }
    for (int i=1; i<=r; i++) {
        r1=r1*i;
    }
    c2=k1*r1;
    c=n1/c2;
    
    cout << c;
    return 0;
    
}