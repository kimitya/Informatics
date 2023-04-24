#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    int a;
    if (s[1]==43){
        // cout << int (s[4]) << endl;
        // cout << int (s[2]) << endl;
        a=int(s[4])-int (s[2]);
    }
    else if (s[1]==45) {
        a=int(s[0])-int(s[4]);
    }
    cout << a;
    return 0;
}