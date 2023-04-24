#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    float a[n];

    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        if (i+1<n) {
            if (a[i] > 0 && a[i+1]>0) {
                cout << "YES";
                return 0;
            }
            if (a[i] < 0 && a[i+1]<0) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;

}