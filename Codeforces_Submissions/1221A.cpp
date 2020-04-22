#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
ll test;
cin>>test;
while(test--)
{
    ll n;
    cin>>n;
    // vector <ll> v;
    ll test,i;
    map <ll,ll> mp;
    // cout<<mp.size()<<" ";
    bool flag=0;
    for(i=0;i<n;i++)
    {
       
        
        ll temp;
        cin>>temp;
        // if(n==64)
        // cout<<temp<<" ";
        if(flag)
            continue;
        while(mp[temp]==1)
        {
            mp[temp]=0;
            temp=temp*2;
            if(temp==2048)
            {
                flag=1;
                break;
            }
        }
        mp[temp]=1;
        if (temp == 2048)
        {
            flag = 1;
            // break;
        }
        if(flag)
        {
            cout<<"yes";
            // cout<<temp;
            // break;
        }
    }
    // cout<<i<<" ";
    if(!flag)
        cout<<"no";
    
    cout<<endl;
}
return 0;
}