#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    string s;
    int mx=0;
    string mxs ="";
    while (cin>>s) {
        if (s.size()>mx){
            mx=s.size();
            mxs = s;
        }
    }
    cout << mxs << endl << mx;
    return 0;
}