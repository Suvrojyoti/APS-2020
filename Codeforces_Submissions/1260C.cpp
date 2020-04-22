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
ll n,a,b,i,j,c,d,k;
cin>>n;
while (n--)
{
    cin>>a>>b>>c;
    i=__gcd(a,b);
    a=a/i;
    b=b/i;
    if(a>b)
        swap(a,b);
    if((b-1+a-1)/a>=c)
        cout<<"REBEL\n";
    else
    {
        cout<<"OBEY\n";
    }
    
    
    
}
return 0;
}