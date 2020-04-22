#include<bits/stdc++.h>
using namespace std;

int a[50][50];
int b[50][50];
int main(){
    int n,m,i,j,t;
    
    cin >> n >> m;
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> b[i][j];
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]>b[i][j])
                {
                    t = a[i][j];
                    a[i][j] = b[i][j];
                    b[i][j] = t;
                }
            if(j>0){
                if(a[i][j]<=a[i][j-1]||b[i][j]<=b[i][j-1]){
                    cout << "Impossible";
                    return 0;
                }
            }
            if(i>0){
                if(a[i][j]<=a[i-1][j]||b[i][j]<=b[i-1][j]){
                    cout << "Impossible";
                    return 0;
                }
            }
        }
    }
    cout << "Possible";
    return 0;
}