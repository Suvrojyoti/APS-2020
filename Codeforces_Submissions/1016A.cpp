#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,p,i,a[300000],count=0;
    cin>>n>>k;
    p=0;
    i=0;
    while(n--)
    {
        
        cin>>a[i];
        if(p<=a[i]&&p!=0)
        {
            count++;
            a[i]=a[i]-p;
            p=0;
        }
        else if(p!=0)
        {
            p=p-a[i];
            a[i]=0;
        }
        if(a[i]>0)
        {
            count+=a[i]/k;
            p=k-(a[i]%k);
        }
        cout<<count<<" ";
        count=0;
        i++;
    }
    
    return 0;
}