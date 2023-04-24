#include <iostream>
using namespace std;
int main () {
    int x;
    int cnt = 0;
    int sum = 0;

    while(cin >> x){
        if(x == 0){
            break;
        }
        sum += x;
        cnt++;
    }
    cout << float(sum) / cnt;

    return 0;
}