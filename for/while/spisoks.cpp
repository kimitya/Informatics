#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n,i,j,k;
    cin >> n;
    j=0;
    i=0;
    while (i<n) {
        k=pow(2,j);
        if (k>n) {
            return 0;
        }
        cout << k << " ";
        i=k;
        j++;
    }
    return 0;

}