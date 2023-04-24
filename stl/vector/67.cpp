#include <iostream>
#include <vector>
#include <map>
#include <iterator>

using namespace std;
vector <int>:: iterator it;

bool twoelement(vector<int> v){
    for (it=v.begin(); it!=v.end()-1; it++){
        if ((*it>=0 && *(it+1)>=0) || (*it<0 && *(it+1)<0)) {
            return 1;
        }
    }
    return 0;

}

int main(){
    int n;
    cin >> n;
    vector <int> v;
    while (n--){
        int x;
        cin >> x;
        v.push_back(x);
    }

    if (twoelement(v)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}