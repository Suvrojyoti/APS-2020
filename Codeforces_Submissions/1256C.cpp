#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

ll n,m,d,i,j,arr[1005],arr1[1005],k,sum=0;
cin>>n>>m>>d;
for(i=0;i<m;i++)
{
    cin>>arr[i];
    sum+=arr[i];
}
if(sum+(d-1)*(m+1)<n)
{
    cout<<"NO";
    exit(0);
}
else
{
    cout<<"YES"<<endl;
}

ll lim=0,dn=0;
j=0;
d--;
for(i=1;i<=n;i++)
{
    // cout<<endl;
    if(lim==d||sum>n-i)
    {   
        ll p;
        for( p=i;p<arr[j]+i;p++)
        {
            arr1[p]=j+1;
            
        }
        i = p-1;
        j++;
        sum-=arr[j-1];
        lim=0;
        // cout<<sum<<"*";
        // for (int i = 1; i <= n; i++)
        //     cout << arr1[i] << " ";

        continue;
    }
    arr1[i]=0;
    lim++;

    // cout << sum << "*";
    // for (int i = 1; i <= n; i++)
    //     cout << arr1[i] << " ";
}
for(i=1;i<=n;i++)
    cout<<arr1[i]<<" ";
return 0;
}