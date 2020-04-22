#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[1000];
    long int i,sum,c,n,k1[1000],k2[1000],p;
    cin>>n;
    p=n;
    for(i=0;i<1000;i++)
    {
        k1[i]=0;
        k2[i]=0;
    }
    while(p--)
    {
        cin>>arr;
        sum=0;
        for(i=0;arr[i]!='\0';i++)
        {
            sum+=arr[i];
        }
        k1[sum]++;
    }
    p=n;
     while(p--)
    {
        cin>>arr;
        sum=0;
        for(i=0;arr[i]!='\0';i++)
        {
            sum+=arr[i];
        }
        k2[sum]++;
    }
    c=0;
    for(i=0;i<1000;i++)
    {
        if(k1[i]!=0&&k2[i]!=0)
        {
            c+=min(k1[i],k2[i]);
        }
    }
    cout<<n-c;
    return 0;
}