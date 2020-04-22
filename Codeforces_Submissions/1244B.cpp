#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
ll mod (ll a,ll b)
{
    if(a%b==0)
        return a/b;
    else
    {
        return (a/b)+1;
    }
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test,i,a,b;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        char c;
        a=0,b=0;
        ll flag=0;
        for(i=1;i<=n;i++)
        {
            cin>>c;
            if(c=='1')
            {
                a++;
                b=i;
            }
            if(c=='1'&&!flag)
                flag=i;
        }
        if(flag)
        cout<<max(max(max(n,n+a),2*b),2*(n+1-flag))<<endl;
        else
        {
           cout<< max(max(n, n + a), 2 * b)<<endl;
        }
        
        
    }
    return 0;
}