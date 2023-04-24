#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    int cnt[10001];
    int d =0;
    for (int i=0; i<10001; i++) {
        cnt[i]=0;
    }
    for (int i =0 ; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        cnt[a[i]]++;
    }
    for (int i=0; i<10001; i++) {
        if (cnt[i]!=0) {
            d++;
        }
    }
    cout << d;
    return 0;
}