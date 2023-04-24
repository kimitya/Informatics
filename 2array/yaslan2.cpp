#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; 
    int ans, sum = 0, res = 0 ;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >>a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int rowsum = 0, rowmax = 0;
        for(int j = 0; j < m; j++){
            rowsum += a[i][j];
            if(a[i][j]>rowmax){
                rowmax = a[i][j];
            }
        }
        if(rowmax > res){
            res = rowmax;
            ans = i;
            sum = rowsum;
        }
        else if(res == rowmax && rowsum > sum){
            res = rowmax;
            ans = i;
            sum = rowsum;
        }
    }
    cout << ans;
    return 0;
}