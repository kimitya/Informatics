#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

bool isPrime(int n){
    if(n < 2) return false;

    for(int i = 2; i < n / 2 + 1; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a, b;
    cin >> a >>  b;
    vector <int> v;

    for (int i=a; i<=b; i++) {
        if (isPrime(i)) {
            v.push_back(i);
        }
    }
    if (!v.empty()) {
        for (int i=0; i<v.size(); i++) {
            cout << v[i] << endl;
        }
    }
    else cout << "Absent";

    return 0;
}