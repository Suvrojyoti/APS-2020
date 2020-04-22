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
ll n,a,b,c,d,i;
cin>>n;
while(n--)
{
    cin>>a>>b;
    if(b<a)
    {       
        cout<<b<<endl;
        continue;
    }
    ll c=(b/a);
    ll sum=(c*c)*(a-(b%a));
    sum+=(c+1)*(c+1)*(b%a);
    cout<<sum<<endl;

}
return 0;
}