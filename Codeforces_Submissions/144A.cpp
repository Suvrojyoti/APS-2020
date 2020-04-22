#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[200],i,m,m1,l,l1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    m=-1;
    l=9999;
    for(i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
            m1=i;
            
        }
        if(arr[i]<=l)
        {
            l=arr[i];
            l1=i;
        }
    }
    if(m1<l1)
    {
        cout<<m1+(n-1-l1);
    }
    else if(m1>l1)
    {
        cout<<m1+(n-1-l1)-1;
    }
    else
    {
        cout<<"0";
    }
    return 0;
}