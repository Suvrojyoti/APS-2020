#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,q,i,alu[10000],count=0,j,m,t,p,al[10000],h;
    char arr[10000],a[10000];
    cin>>n>>k>>q;
    cin>>arr;
    cin>>a;
    alu[0]=0;
    for(i=0;i<n;i++)
    {
        j=0;
        t=0;
        p=i;
        while(arr[p]==a[j]&&a[j]!='\0')
        {
            t++;
            j++;
            p++;
            if(t==k)
            {
                alu[i+1]=count++;
                al[p-1]=count;
            }  
        }
        alu[i+1]=count;
    }
    //for(i=0;i<=n;i++)
        //cout<<al[i]<<" ";
    //cout<<"\n";
    h=al[0];
    for(i=0;i<=n;i++)
    {
        if(h<al[i])
            h=al[i];
        al[i]=h;
    }
    //for(i=0;i<=n;i++)
      //  cout<<al[i]<<" ";
    while(q--)
    {
        cin>>m>>n;
        if(n-m+1>=k)
        cout<<al[n-1]-alu[m-1]<<"\n";
        else
        cout<<"0\n";
    }
    return 0;
}