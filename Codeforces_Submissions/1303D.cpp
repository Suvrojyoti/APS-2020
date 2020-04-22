#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
// #define fi first
#define MOD 1000000007
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn = 205;

unsigned ll ffs(unsigned ll n) 
{ 
    return log2(n & -n) + 1; 
} 




int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,j;
unsigned ll s,n,i;
cin>>test;
while(test--)
{
    cin>>s>>n;
    unsigned ll arr[n+5];
    vector < ll> c(65,0);
    unsigned ll sum=0,res=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        c[ffs(arr[i])-1]++;
    }
    
    if(sum<s)
    {
        cout<<"-1\n";
        continue;
    }
    // for(i=0;i<60;i++)
    //     cout<<c[i]<<" ";
    // cout<<"YES\n";
    i=0;
    // ll p=pow(2,31);
    // cout<<p<<endl;
    while(i<60)
    {
        unsigned ll t=pow(2,i);
        // cout<<t<<" i "<<i<<" "<<(t&s)<<endl;
        if( (t&s) != 0)
        {
            // cout<<t<<" "<<i<<" "<<s<<" "<<res<<endl;
            if (c[i] > 0)
                c[i] -= 1;
            else
            {
                // cout<<i<<" "<<res<<" "<<s<<endl;
                while (i < 60 and c[i] == 0)
                {
                    i += 1;
                    res += 1;
                }
                c[i] -= 1;
                continue;
            }
        }
        // cout<<i<<endl;
        c[i + 1] += c[i]/2;
        i += 1;
    }
    cout<<res<<endl;
}

return 0;
}