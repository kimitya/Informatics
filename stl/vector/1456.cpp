#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

vector <int>:: iterator it;

int maxInVector (vector <int> v){
    int maxx=INT_MIN;
    for (it=v.begin(); it!=v.end(); it++) {
        if (*it>maxx) {
            maxx=*it;
        }
    }
    return maxx;
}

int minInVector (vector <int> v){
    int minn=INT_MAX;
    for (it=v.begin(); it!=v.end(); it++) {
        if (*it<minn) {
            minn=*it;
        }
    }
    return minn;
}

int main(){
    vector <int> v;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    int maxx = maxInVector(v);
    int minn = minInVector (v);
    if (k>=maxx) {
        cout << 1;
        return 0;
    }
    else if (k<=minn) {
        cout << v.size();
        return 0;
    }
    else {
        for (int i=0; i<v.size(); i++) {
            if (k<v[i] && k>v[i+1]){
                cout << i+2;
                return 0;
            }
        }
    }

    return 0;
}