#include <iostream>
using namespace std;
int main () {
    string s;
    getline (cin, s);
    string s1="";
    for (int i=0; i<s.size(); i++) {
        if (int(s[i])!=32 && int(s[i+1])!=32) {
            cout << s[i];
        }
        else if (int(s[i])==32 && int(s[i+1]!=32)) {
            cout << s[i];
        }
    }
    //cout << s1;
    return 0;
}