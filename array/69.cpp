#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int n1=n-1;
    for (int i=0; i<n; i++) {
        b[i]=a[n1];
        n1--;
    }
    for (int i=0; i<n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
    