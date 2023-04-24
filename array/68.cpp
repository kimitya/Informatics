#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    int cnt=0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        if (i-1>=0 && i+1<n) {
            if (a[i-1]<a[i] && a[i]>a[i+1]) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;

}
