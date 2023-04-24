#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int mx=INT_MIN;
    int cnt=0;
    for (int i=0; i<n;i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i=0; i<n;i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j]>mx){
                mx=a[i][j];
            }
        }
    }
    //cout << mx << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j]==mx) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}