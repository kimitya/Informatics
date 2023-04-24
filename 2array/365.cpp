#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int cnt =0;
    int a[2*n+1][2*n+1];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            a[n+1][n+1]=cnt;
            cnt++;
            n--;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}