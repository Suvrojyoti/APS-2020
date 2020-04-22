#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll damn(ll a,ll b)
{
    if(a<=b)
        return b-a;
    else
        return 10+a-b;
}
//ll inf=1000000007;
int main()
{
    ll n,test,i,arr[12][12],j,i1,j1,k;
    
    string a;
    cin>>a;
    for(i1=0;i1<=9;i1++)
    {
        for(j1=0;j1<=9;j1++)
        {
            memset(arr,1000000007,sizeof(arr));
            for(i=0;i<10;i++)
                arr[i][(i1+i)%10]=arr[i][(j1+i)%10]=1;
            for(i=0;i<=9;i++)
            {
                for(j=0;j<=9;j++)
                {
                    for(k=0;k<=9;k++)
                    {
                        arr[j][k]=min(arr[j][k],arr[j][i]+arr[i][k]);
                    }
                }
            }
       
   
          /*  for(i=0;i<=9;i++)
            {
                for(j=0;j<=9;j++)
                    cout<<arr[i][j]<<" ";
                cout<<endl;
            }
            cout<<endl<<endl;*/
            ll sum=0,flag=0;
            for(i=1;i<a.size();i++)
            {
                if(arr[a[i-1]-'0'][a[i]-'0']>=1000000007)
                {
                    flag=1;
                    break;
                }
                sum+=arr[a[i-1]-'0'][a[i]-'0']-1;
            }
            if(!flag)
            cout<<sum<<" ";
            else
            cout<<"-1 ";
        }
        cout<<endl;
    }
    return 0;
}