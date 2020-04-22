#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,n,a[1000],arr[1000],c,i,j,t,cnt,ct=0,in;
    cin>>n;
    for(i=0;i<1000;i++)
        a[i]=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        a[arr[i]]++;
    }
     for(i=0;i<n;i++)
    {
        if(a[arr[i]]==1)
            c++;
        else if(a[arr[i]]>2)
        {
            ct++;
            in=i;
        }
    }
    //cout<<c;
    if(c%2==0)
    {
        
        t=c/2;
        cout<<"YES\n";
    for(i=0;i<n;i++)
    {
        if(a[arr[i]]>1)
            cout<<"A";
        else if(a[arr[i]]==1)
        {
            cnt++;
            if(cnt<=t)
                cout<<"A";
            else
                cout<<"B";
        }
    }
    }
    else if(ct>0)
    {
        t=c/2;
        cout<<"YES\n";
    for(i=0;i<n;i++)
    {
        if(i==in)
            cout<<"A";
        
        else if(a[arr[i]]>1)
        {
            
            if(arr[i]!=arr[in])
            cout<<"A";
            else
            cout<<"B";
        }
        else if(a[arr[i]]==1)
        {
            cnt++;
            if(cnt<=t)
                cout<<"A";
            else
                cout<<"B";
        }
    }
        
    }
    else
        cout<<"NO";
    
    return 0;
}