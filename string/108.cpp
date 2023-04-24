#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;

    string t = "";
    for (int i = s.size()-1; i>=0; i--) {
            t += s[i];
    }

    if (s==t) {
        cout << "yes";
    }else {
        cout << "no";
    }
    // // for (int i =0; i<s.size(); i++) {
    //     int x = s.size();
    //     if (s[i]!=s[x-1-i]) {
    //         cout << "no";
    //         return 0;
    //     }
    //     else cout<<"yes";
    // }
    return 0;
}
