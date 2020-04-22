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
    cin>>a>>b;
    if(a>b)
        swap(a,b);
    if((a+b)%3==0&&a*2>=b)
        cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    
    
}
return 0;
}