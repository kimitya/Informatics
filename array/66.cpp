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
        if (i>0){
            if (a[i]>a[i-1]) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}