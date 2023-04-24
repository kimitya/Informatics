#include <iostream>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a;
    for(int i=0; i<a.size(); i++){
        if(a[i]>=65 && a[i]<=92){
            b[i] =  tolower(a[i]);
            cout<<b[i];
        }
        else if(a[i]>=97 && a[i]<=122){
            b[i] = toupper(a[i]);
            cout<<b[i];
        }
    }
    return 0;
}