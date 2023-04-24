#include <iostream>
#include <vector>
#include <iterator>

using namespace std;
vector <int> :: iterator it;

int morethanlast(vector<int> v) {
    int cnt=0;

    for(it=v.begin()+1; it!=v.end(); it++) {
        if ((*it)>*(it-1)){
            cnt++;
        }
    }
    return cnt;

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
    cout << morethanlast(v);
    return 0;
}