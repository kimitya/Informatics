#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];

    int mx=INT_MIN;
    int imx;

    int sum;
    int summx=INT_MIN;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j]>mx) {
                mx = a[i][j];
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sum+=a[i][j];
            }
        if (sum>summx) {
            summx=sum;
        }        
        sum=0;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sum+=a[i][j];
        }
        if (sum=summx) {
            
        }
    }

    
    return 0;
}