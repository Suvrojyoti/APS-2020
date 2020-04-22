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
ll a,b,c,d;
cin>>a>>b;
if(a==b)
    cout<<a*10<<" "<<b*10+1;
else if(a+1==b)
    cout<<a<<" "<<b;
else if(a==9&&b==1)
    cout<<"9 10";
else
{
    cout<<"-1";
}
}