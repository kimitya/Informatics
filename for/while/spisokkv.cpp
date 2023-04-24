#include <iostream>
using namespace std;
int main () {
    int n,j;
    cin >>n;
    int i=1;
    while(j<n) {
        j=i*i;
        if (j>n) {
            return 0;
        }
        cout <<j<< endl;
        i++;
    }
    return 0;
}