#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

int maxInVector (vector <int> v){
    int maxx=INT_MIN;
    for (int i=0; i<v.size(); i++) {
        if (v[i]>maxx) {
            maxx=v[i];
        }
    }
    return maxx;
}

int cntMaxInVector (vector <int> v, int maxx) {
    int cnt=0;
    for (int i=0; i<v.size(); i++) {
        if (v[i]==maxx) {
            cnt++;
        }
    }
    return cnt;
}

int main(){
    vector <int> v;
    int x;
    while(cin>> x){
        if (x==0) {
            break;
        }
        else v.push_back(x);
    }
    int maxx = maxInVector(v);
    cout << cntMaxInVector(v, maxx);

    return 0;
}