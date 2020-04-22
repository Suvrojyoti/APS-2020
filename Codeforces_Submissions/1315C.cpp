#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test,n,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n;
        ll arr[n+5],fin[2*n+5];
        bool ck[2*n+5];
       memset(ck,0,(2*n+5)*sizeof(ck[0]));
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            // cout<<arr[i];
            ck[arr[i]]=1;
        }
        bool flag=0;
        // cout<<"aasd";
        for(i=0;i<n;i++)
        {
            j=arr[i];
            while(j<=2*n and ck[j]==1)
                j++;
            if(j>2*n)
            {
                flag=1;
                break;
            }
            ck[j]=1;
            fin[2*i]=arr[i];
            fin[2*i+1]=j;
        }
        if(flag)
        {
            cout<<"-1\n";;
            continue;
        }
        for(i=0;i<2*n;i++)
            cout<<fin[i]<<" ";
        cout<<endl;
    }
    return 0;
       
}