#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];

    int mx=INT_MIN;
    int sum=0;
    int cnt=0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sum+=a[i][j];
        }
        if (sum>mx){
            mx=sum;
        }
        sum=0;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sum+=a[i][j];    
        }
        if (sum==mx) {
            cnt++;
        }
        sum =0;
    }
    cout << cnt;
    return 0;
}