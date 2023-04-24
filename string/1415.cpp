#include <iostream>
using namespace std;
int main () {
    string s;
    int x;
    cin >> s;
    cin >> x;
    for (int i=0; i<s.size(); i++) {
        int l =int(s[i]-x);
        if (l<65) {
            l=90-x;
        }
        cout<< char(l);
    }
    return 0;
}