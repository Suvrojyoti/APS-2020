#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n;
    cin>>n;
    int a[n+1];
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
    int start[n+1]={0};
    int q;
    cin>>q;
    int arr[q]={0};
    
    
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        
        if(x == 1){
            int p,f;
            cin>>p>>f;
            start[p]=i+1;
            a[p]=f;
            arr[i]=-1;
        }
        else{
            int z;
            cin>>z;
            arr[i]=z;
        }
    }
    
    int maxi[q];
    
    maxi[q-1]=arr[q-1];
    
    for(int i=q-2;i>=0;i--){
        maxi[i]=max(arr[i],maxi[i+1]);
    }
    
    
    for(int i=1;i<=n;i++){
        if(start[i]<q)
        cout<<max(maxi[start[i]],a[i])<<" ";
        else
        cout<<a[i]<<" ";
    }
    
}