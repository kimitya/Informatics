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

int mindist (vector <int> v, int maxx) {
    int mindist=INT_MAX;
    for (int i=0; i<v.size(); i++) {
        if (v[i]==maxx) {
            for (int j=i+1; j<v.size(); j++) {
                if (v[j]==maxx && j-i<mindist) {
                    mindist = j-i;
                }
            }
        }
    }
    return mindist;

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

    if (mindist(v,maxx)!=INT_MAX){
        cout << mindist(v,maxx);
    } else cout << 0;
    return 0;
}