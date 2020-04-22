#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n,h,m,arr[100]={0},l,r,x,sum=0,i;
    cin>>n>>h>>m;
    for(i=0;i<n;i++)
        arr[i]=h;
    while(m--)
    {
        cin>>l>>r>>x;
        for(i=l-1;i<r;i++)
        {
            if(x<arr[i])
                arr[i]=x;
        }
    }
    for(i=0;i<n;i++)
        sum+=arr[i]*arr[i];
    cout<<sum;
    return 0;
}