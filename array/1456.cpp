#include <iostream>
using namespace std;
int main () {
    int n, x, f; 
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> x;
    
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]<a[j]) {
                f = a[j];
                a[j]=a[i];
                a[i]=f;
            }
        }
    }
    // for (int i=0; i<n; i++) {
    //         cout << a[i] << " ";
    // }
    // cout << endl;
    
    for (int i=0; i<n; i++) {
        if (a[i]>x && a[i+1]<x) {
            cout << i+2;
        }
        
    }
    return 0;
}