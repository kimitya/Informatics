#include <iostream>
using namespace std;
int main () {
    int n, x; 
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> x;
    
    for (int i=0; i<n; i++) {
        if (i+1<n) {
            if (a[i]>x && a[i+1]<x) {
                cout << i+2;
                return 0;
            }
        }
        else if (x>a[0]) {
            cout << 1;
            return 0;
        }
        else {
            cout << n+1;
            return 0;
        }
    }
    return 0;
}
