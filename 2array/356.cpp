#include <iostream>
#include <limits.h>
using namespace std;
int main (){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int sum=0;
    int mx=INT_MIN;
    int imx=0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sum+=a[i][j];
        }
        if (sum>mx) {
            mx=sum;
            imx=i;
        }
        sum=0;
    }
    
    cout << mx << endl;
    cout << imx;
    return 0;
}