#include <iostream>
#include <string>
using namespace std;
int main () {
    string s, t;
    cin >> s;
    cin >> t;
    if (t.find(s)!=string::npos){
        cout << "yes";
    }
    else cout << "no";
    return 0;
}