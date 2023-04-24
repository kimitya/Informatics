#include <iostream>

using namespace std;

int main(){
    string s;
    long long x;
    long long dx = 0, dy = 0;
    while(cin >> s >> x){
        if(s == "North"){
            dy += x;
        }else if(s == "South"){
            dy -= x;
        }else if(s == "East"){
            dx += x;
        }else{
            dx -= x;
        }
    }

    cout << dx << " " << dy << endl;

    return 0;
}