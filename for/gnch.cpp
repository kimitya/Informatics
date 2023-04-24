#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt = 0;
    if(n == 1){
        cout<<1;
        return 0;    
    }else if(n == 2){
        cout<<1<<" "<<2;
        return 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<i<<" ";
            cnt++;
            if(cnt == n){
                return 0;
            }
        }
    }

    return 0;
}