#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    if (n%10==1 & n!=11) {
        cout << n << " " << "korova";
    }
    else if (n%10==2 | n%10==3 | n%10==4 | n==11) {
        cout << n<< " " << "korovy";
    }
    else if (n%10==5|n%10==6|n%10==7|n%10==8| n%10==9| n%10==0) {
        cout << n << " " << "korov";
    }

    return 0;
}