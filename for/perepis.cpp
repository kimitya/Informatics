#include <iostream>
using namespace std;
int main () {
    int n, mx;
    int age, sex;
    int a[n];
    mx=0;
    for (int i=0; i<n; i++) {
        cin >> age >> sex;
    }
    for (int i=0; i<n; i++) {
        if (sex==1) {
            a[i]=age;
            if (a[i]>mx) {
                mx=a[i];
            }

        }
    cout << i;
    }
    }
