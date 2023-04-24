#include <iostream>

using namespace std;
int main () {
    int n, s, side1, side0;
    cin >> n;
    side1=0;
    side0=0;
    for (int i=0; i<n; i++) {
        cin >> s; 
        if (s==1) {
            side1++;
        }
        if (s==0) {
            side0++;
        }
    }
    if (side1>side0) {
        cout << side0;
    }
    if (side0>side1) {
        cout << side1;
    }

    return 0;
    


}