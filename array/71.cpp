#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i =0; i<n; i++) {
        cin >> a[i];
    }
    b[0]=a[n-1];
    //cout << b[0];
    for (int i=1; i<n; i++) {
            b[i]=a[i-1];
    }

    for (int i=0; i<n; i++) {
        cout << b[i] << " ";
    }
    return 0;

}