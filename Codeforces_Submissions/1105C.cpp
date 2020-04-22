#include <bits/stdc++.h>
using namespace std;
long long int n,l,r,m=1000000007,arr[200005][3],t0,t1,t2,i;
int main()
{
    cin>>n>>l>>r;
    l--;
    t0=r/3 - l/3;
    t1=(r+2)/3 - (l+2)/3;
    t2=(r+1)/3 - (l+1)/3;
   
 /*   for(i=l;i<=r;i++)
    {
        if(i%3==0)
            t0++;
        if(i%3==1)
            t1++;
        if(i%3==2)
            t2++;
    }*/
    //cout<<t0<<" "<<t1<<" "<<t2<<endl;
    arr[1][0]=t0;
    arr[1][1]=t1;
    arr[1][2]=t2;
    for(i=2;i<=n;i++)
    {
        arr[i][0]+=(arr[i-1][0]*t0);
        arr[i][0]%=m;
        arr[i][0]+=(arr[i-1][1]*t2);
        arr[i][0] %=m;
        arr[i][0]+=(arr[i-1][2]*t1);
        arr[i][0] %=m;
        
        arr[i][1]+=(arr[i-1][0]*t1);
        arr[i][1]%=m;
        arr[i][1]+=(arr[i-1][1]*t0);
        arr[i][1] %=m;
        arr[i][1]+=(arr[i-1][2]*t2);
        arr[i][1] %=m;
        
        arr[i][2]+=(arr[i-1][0]*t2);
        arr[i][2]%=m;
        arr[i][2]+=(arr[i-1][1]*t1);
        arr[i][2] %=m;
        arr[i][2]+=(arr[i-1][2]*t0);
        arr[i][2] %=m;
        
        
        
    }
    cout<<arr[n][0];
    return 0;
}