#include <iostream>
using namespace std;
int main(){
    int n;
    int x;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(n%2 != 1 && i==n-1) {
            x = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = x;
            i += 1;
        }
        else {
            if (i<n-1){
            x = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = x;
            i += 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}