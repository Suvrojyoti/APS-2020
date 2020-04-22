#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long int i,n,m,k,c1=0,j;
    char arr[2005][2005],a[5]={'a','e','i','o','u'};
    cin>>k;
    for(i=5;i<k;i++)
    {
        if(k%i==0)
        {
            n=i;m=k/i;
            break;
        }
    }
    //cout<<n<<" "<<m<<"\n";
    if(n<5||m<5)
    {
        cout<<"-1";
        exit(0);
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            arr[i][j]='a';
            
    for(i=0;i<5;i++)
    {
        c1=i;
        for(j=0;j<5;j++)
        {
            arr[i][j]=a[c1%5];
            c1++;
        }
    }
   /* for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }*/
    for(i=5;i<n;i++)
    {
        for(j=0;j<5;j++)
            arr[i][j]=a[j];
    }
    
    for(i=5;i<m;i++)
    {
        for(j=0;j<5;j++)
        {
          //  cout<<j<<" "<<i<<" "<<arr[j][i]<<" "<<a[j]<<"  ";
            arr[j][i]=a[j];
        }
          //  cout<<"\n";
            
    }
   // cout<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<arr[i][j];//<<" ";
        //cout<<"\n";
    }
    return 0;
}