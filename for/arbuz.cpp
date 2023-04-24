#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n,mx,mn ;
    cin >> n;
    mx=INT_MIN;
    mn=INT_MAX;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++) {    
        if (arr[i]>mx) {
            mx=arr[i];
        }
    }
    for (int i=0; i<n; i++) {
        if (arr[i]<mn) {
            mn=arr[i];
        }
    }

    cout << mn << " " << mx;
    return 0;
}