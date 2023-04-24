#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        if (int (s[i])>=97 && int(s[i])<=122) {
            cout << char (int(s[i]-32));
        }
        else if (int(s[i])>=65 && int(s[i])<=90) {
            cout << char (int(s[i]+32));
        }
    }
    return 0;
    
}