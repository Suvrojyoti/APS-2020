#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int
int main()
{
    ll n,a[2500],mx,i,t,arr[2500][2],arr1[2500][2];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    i=0;
    while(i<n)
    {
        ll p1=0,p2=0;
        while(i<n)
        {
            if(a[i]==1)
                p1++;
            else
                p2++;
            if(i<n-1&&a[i]>a[i+1])
                break;
            i++;
        }
       // cout<<p1<<" "<<p2<<endl;
        arr[t][0]=p1;
        arr[t][1]=p2;
        t++;
     
        i++;
    }
    i=0;
    ll t1=0;
    while(i<n)
    {
        ll p1=0,p2=0;
        while(i<n)
        {
            if(a[i]==1)
                p1++;
            else
                p2++;
            if(i<n-1&&a[i]<a[i+1])
                break;
            i++;
        }
       // cout<<p1<<" "<<p2<<endl;
        arr1[t1][0]=p1;
        arr1[t1][1]=p2;
        t1++;
     
        i++;
    }

   // for(i=0;i<t1;i++)
     //   cout<<arr1[i][0]<<" "<<arr1[i][1]<<endl;
    ll sum=-1;
    for(i=0;i<t;i++)
    {
        if(i>0)
        {
            sum=max(sum,arr[i-1][1]+arr[i-1][0]+arr[i][1]);
        }
        if(i<n-1)
        {
            sum=max(sum,arr[i][0]+arr[i+1][0]+arr[i+1][1]);
        }
        sum=max(sum,arr[i][0]+arr[i][1]);
    }
    for(i=0;i<t1;i++)
    {
        if(i>0)
        {
            sum=max(sum,arr1[i-1][0]+arr1[i][0]+arr1[i][1]);
        }
        if(i<n-1)
        {
            sum=max(sum,arr1[i][1]+arr1[i+1][1]+arr1[i+1][0]);
        }
        if(i>0&&i<n-1)
            sum=max(sum,arr1[i-1][0]+arr1[i+1][1]+arr1[i][0]+arr1[i][1]);
        //sum=max(sum,arr1[i][0]+arr1[i][1]);
    }
    cout<<sum;
    return 0;
        
}