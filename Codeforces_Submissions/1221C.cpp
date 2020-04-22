#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
ll a,b,c;
bool cost (ll k)
{
    ll t=0;
    t=a+b-2*k;
    t+=c;
    if(t>=k)
        return 1;
    else
    {
        return 0;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll q;
cin>>q;
while(q--)
{
    cin>>a>>b>>c;
    // cout<<a<<b;
    ll mx=min(a,b),mn=0;
    // cout<<mx;
    if(cost(mx))
    {
        cout<<mx<<endl;
        continue;
    }
    while(mn<mx)
    {
        ll md=(mn+mx)/2;
        if(cost(md))
            mn=md+1;
        else
        {
            mx=md-1;
        }
        // cout<<mn<<" "<<mx<<endl;
        
    }
    if(!cost(mn))
        mn--;
    if(!mn)
        cout<<0<<endl;
    else
    cout<<mn<<endl;

}
return 0;
}