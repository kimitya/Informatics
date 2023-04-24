#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;

    int r = n-k;


    int b1[r];
    for (int i=0; i<r; i++) {
        b1[i]=a[i];
    }
    
    int b2[k];
    
    for (int i=0; i<k; i++) {
        b2[i]=a[r];
        r++;
    }
    for (int i=0; i<k; i++) {
        cout << b2[i] << " ";
    }
    for (int i=0; i<r; i++) {
        cout << b1[i] << " ";
    }
    return 0;
}