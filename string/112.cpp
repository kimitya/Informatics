#include <iostream>
using namespace std;
int main () {
    string s;
    getline (cin, s);
    string t="";
    string t1="";

    for (int i=0; i<s.size(); i++) {
        if (int(s[i])!=32) {
            t+=s[i];
        }
    }
    //cout << t << endl;

    for (int i=t.size()-1; i>=0; i--) {
        t1+=t[i];
    }

    //cout << t1;

    if (t1==t) {
        cout << "yes";
    }
    else cout << "no";

    return 0;
}